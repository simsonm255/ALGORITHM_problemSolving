#include<stdio.h>
void main(){

    int data,n;
    printf("Enter the data:");
    scanf("%d",&data);
    printf("Enter the bit position:");
    scanf("%d",&n);
    printf("%d",data|(1<<n));
}
/* bit position starts from '0'
                            ....4  3 2 1 0
   3=> 0 0 0 0   0 0 0 0  0 0 0 0  0 0 1 1



 */