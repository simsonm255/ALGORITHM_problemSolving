#include"stdio.h"
void main(){
    int elementNo1,elementNo2;
    printf("Enter the two elements:")
    scanf("%d%d",&elementNo1,&elementNo2);
    if((elementNo1^elementNo2)<0){
        printf("The given number are opposite sign");
    }else{
        printf("The given number are same sign");
    }
}


/* xor bitwise operator is used find sign of two number
      A -> elementNo1
      B -> elementNo2

      A  B   A^B 
      1  1    0
      0  0    0
      1  0    1
      0  1    1
 */