#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int t=n;
    while(n!=0){
        int s = t-k;
        while(s>0){
            printf(" ");
            s--;
        }
        s=k;
        while(s!=0){
            printf("* ");s--;
        }
        printf("\n");
        k++;
        n--;
    }
    return 0;
}

/*
ouput:
3
  * 
 * * 
* * * 
*/