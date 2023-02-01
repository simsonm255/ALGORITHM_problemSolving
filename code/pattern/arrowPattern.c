#include <stdio.h>

int main()
{   
    int n;
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
    n--;
    while(n!=0){
        int k = n;
        while(k!=0){
            printf("*");
            k--;
        }
        
        printf("\n");
        n--;
    }
    return 0;
}
