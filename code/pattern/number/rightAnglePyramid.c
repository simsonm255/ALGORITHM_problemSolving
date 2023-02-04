#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k =1;
    while(n!=0){
        int i = 1,s = k;
        while(s){
           printf("%d",i);
           i++;
           s--; 
        }
        printf("\n");
        k++;
        n--;
    }
    return 0;
}