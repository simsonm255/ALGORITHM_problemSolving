#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_WORD_LEN 100
#define MAX_WORDS 1000000

int dictionary_count = 0;
char dictionary[MAX_WORDS][MAX_WORD_LEN];

void load_dictionary(char *file_name)
{
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("Error opening dictionary file\n");
        exit(1);
    }

    while (fscanf(fp, "%s", dictionary[dictionary_count]) != EOF)
    {
        dictionary_count++;
    }
    fclose(fp);
}

int edit_distance(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int dp[len1 + 1][len2 + 1];

    // Initialize the dp array
    for (int i = 0; i <= len1; i++)
        dp[i][0] = i;
    for (int i = 0; i <= len2; i++)
        dp[0][i] = i;

    // Fill in the dp array using dynamic programming
    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + fmin(dp[i - 1][j], fmin(dp[i][j - 1], dp[i - 1][j - 1]));
        }
    }

    return dp[len1][len2];
}

char *correction(char *word)
{
    int min_distance = MAX_WORD_LEN;
    int min_index = -1;

    for (int i = 0; i < dictionary_count; i++)
    {
        int distance = edit_distance(word, dictionary[i]);
        if (distance < min_distance)
        {
            min_distance = distance;
            min_index = i;
        }
    }

    return (min_distance == 1) ? dictionary[min_index] : word;
}

int main()
{
    load_dictionary("big.txt");

    char word[MAX_WORD_LEN];
    printf("Enter a word: ");
    scanf("%[^\n]s", word);
    printf("Corrected word: %s\n", correction(word));

    return 0;
}
