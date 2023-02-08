#include<stdio.h>
void main(){

    int data,n;
    printf("Enter the datament:");
    scanf("%d",&data);
   
    int L = (data>>8)&0x00FF;
    int R = data<<8&0xFF00;
    printf("%d",L|R);
}

/*          
        Rotating Bits

             > > > > >
            ^         ↓
            ^         ↓
        ~~~~~~~~~  ~~~~~~~~~            
43605   1010 1010  0101 0101   => 0101 0101 1010 1010 
        ~~~~~~~~~  ~~~~~~~~~
           ^         ↓
            ^       ↓
             < < < <

    1. Separate Left and Right bits in separate variables in variable L and R.
    2. Move Left most bit to right side and right most bits to left side.
    3. Do bitwise Or for both L & R.
 */