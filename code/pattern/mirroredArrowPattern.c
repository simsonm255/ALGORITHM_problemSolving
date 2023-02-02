#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int k = 1,t=n;
   //Mirrored Right-Angle Triangle
   while(t!=0){
   
       int s = n-k;
       while(s>0){
           printf(" ");
           s--;
       }
       s = k;
       while(s!=0){
           printf("*");
           s--;
       }
       printf("\n");
       k++;
       t--;
   }
   // Inverted Mirrored Right-Angle Triangle
   k = 1;t = n;
   while(t!=0){
       int s = k;
       while(s!=0){
           printf(" ");
           s--;
       }
       s = n-k;
       while(s>0){
           printf("*");
           s--;
       }
       printf("\n");
       k++;
       t--;
   }
}

/*
4
   *
  **
 ***
****
 ***
  **
   *
*/