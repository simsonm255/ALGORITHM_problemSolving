#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k=1;
    while(n!=0){
        int s = n-k;// n-1 space must be printed and next n will be decremented
        while(s>0){// loop to print space of n-k 
            printf(" ");
            s--;
        }
        s = k;
        while(s!=0){
            printf("*");
            s--;
        }
        printf("\n");
        k++;// determine the space and element to be printed
        n--;//row iteration
    }
    return 0;
}