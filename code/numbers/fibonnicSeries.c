#include<stdio.h>
#define nil -1
#define max 100
int look[max];

void initialize(int n)
{
    int i=0;
    while(i!=max){
        look[i]=nil;
        i++;
    }
}

int findFibonic(int n){
    if(look[n]==nil){
        if(n<=1){
            look[n]=n;
        }
        else
            look[n]=findFibonic(n-1)+findFibonic(n-2);
    }
    return look[n];
}

int main()
{
    int n;
    scanf("%d",&n);
    initialize(n);
    printf("%d",findFibonic(n));
}