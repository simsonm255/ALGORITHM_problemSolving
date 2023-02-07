#include<stdio.h>
void main(){

    /* Enter the data and position of bit in data, to Off the particular bit only. */
    int data,n;
    printf("Enter the data:");
    scanf("%d",&data);// given value
    printf("Enter the bit position:");
    scanf("%d",&n);// bit position
    printf("%d",n&~(1<<n));
}