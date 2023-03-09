#include<stdio.h>
void main(){
    /* Check whether the given is power of 2 */
    int data;
    printf("Enter the data:");
    scanf("%d",&data);
    if(data>0){
        if(data&(data-1)){
            printf("Not a Power of two");
        }else{
            printf("power of two");
        }
    }
}
