#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_WORD_LEN 100
#define MAX_WORDS 1000000
#define MAX_SENTENCE_LEN 10000

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
    // printf("len1: %d",len1);
    int len2 = strlen(word2);
    //printf("len2: %d",len2);

    
    int dp[len1 + 1][len2 + 1];

    // init dp array
    int i;
    for (i = 0; i <= len1; i++)
        dp[i][0] = i;
    for (i = 0; i <= len2; i++)
        dp[0][i] = i;

    // dp array using dynamic programming
    for (i = 1; i <= len1; i++)
    {
    	int j;
        for (j = 1; j <= len2; j++)
        {   
            
            // printf(word1);
            if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + fmin(dp[i - 1][j], fmin(dp[i][j - 1], dp[i - 1][j - 1]));
                // printf("%d",dp[i][j]);

            
        }
    }
    // edit distance Levenshtein distance between the two word 
    
    return dp[len1][len2];
}

char *correction(char *word)
{
    int min_distance = MAX_WORD_LEN;
    int min_index = -1;
	int i;
    for ( i = 0; i < dictionary_count; i++)
    {
        int distance = edit_distance(word, dictionary[i]);
        // printf("distance: %d  ",distance);
        if (distance < min_distance)
        {
            min_distance = distance;
            min_index = i;
        }
    }

    return (min_distance >= 1) ? dictionary[min_index] : word;
    // return (min_distance == 1) ? dictionary[min_index] : word;
}

void correct_sentence(char *sentence)
{
    char corrected_sentence[MAX_SENTENCE_LEN];
    char *word = strtok(sentence, " ");//---????
    // printf(word);
    int i = 0;
    while (word != NULL)
    {
        strcpy(corrected_sentence + i, correction(word));
        // printf("after cpy corrected_sen: %s\n",correct_sentence);
        i += strlen(correction(word));
        word = strtok(NULL, " ");
        if (word != NULL)
        {
            corrected_sentence[i] = ' ';

            i++;
            //--- printf("corrected_sen: %s\n",correct_sentence);
        }
        corrected_sentence[i] = '\0';
        
        printf("Corrected sentence: %s\n", corrected_sentence);
    }
}

int main()
{
    load_dictionary("big.txt");
    char sentence[MAX_SENTENCE_LEN];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);
    // printf("%s",sentence);
    correct_sentence(sentence);

    return 0;
}