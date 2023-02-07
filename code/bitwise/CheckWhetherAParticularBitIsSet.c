#include<stdio.h>
void main(){
    /*To Check Whether a Particular bit is set or not  */

    int data,n;
    printf("Enter the datament:");
    scanf("%d",&data);
    printf("Enter the bit position:");
    scanf("%d",&n);
    if((data&1<<n)){// checking the nth position of bit
        printf("The bit is set");
    }else{
        printf("The bit is not set");
    }
}