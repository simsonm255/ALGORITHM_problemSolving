#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k = n;
    while(n!=0){
        int s = k-n;
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