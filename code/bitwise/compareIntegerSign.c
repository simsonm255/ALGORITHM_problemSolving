#include"stdio.h"
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a^b)<0){
        printf("The given number are opposite sign");
    }else{
        printf("The given number are same sign");
    }
}


/* xor bitwise operator is used find sign of two number

      A  B   A^B 
      1  1    0
      0  0    0
      1  0    1
      0  1    1

 */