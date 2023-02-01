#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ")
    scanf("%d",&n);
    int k=1;
    while(k<=n){
        int s = k;
        while(s!=0){
            printf("*");
            s--;
        }
        printf("\n");
        k++;
    }
    return 0;
}