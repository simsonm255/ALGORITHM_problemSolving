#include <stdio.h>

int main()
{
    
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        int k=n;
        while(k!=0){
            printf("*");
            k--;
        }
        printf("\n");
        n--;
    }
   
    return 0;
}