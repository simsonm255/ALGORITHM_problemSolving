#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k = 1,t=n;
    while(n!=0){
        int s = n-1;
        while(s!=0){
            printf(" ");
            s--;
        }
        s=k;
        while(s!=0){
            printf("*"" ");
            s--;
        }
        printf("\n");
        k++;
        n--;
        
    }
    n = t-1;
    while(n!=0){
        int s = t-n;
        while(s!=0){
            printf(" ");
            s--;
        }
        s = n;
        while(s!=0){
            printf("*"" ");
            s--;
        }
        printf("\n");
        
        n--;
    }
    return 0;
}