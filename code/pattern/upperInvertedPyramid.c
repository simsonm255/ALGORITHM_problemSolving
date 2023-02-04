#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k = n,t=n;
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
    n = k;
    k=2;
    while(n!=0){
        int s = n-k;
        while(s>0){
            printf(" ");
            s=s-1;;
        }
        if(t==n){
            n--;
            continue;
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
    return 0;
}
