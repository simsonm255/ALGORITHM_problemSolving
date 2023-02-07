#include<stdio.h>
void main(){

    int data;
    scanf("%d",&data);
    if(data>0&&data&(data-1)){
        printf("Not a Power of two");
    }else{
        printf("power of two");
    }

}
