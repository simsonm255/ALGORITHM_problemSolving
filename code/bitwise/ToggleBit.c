#include <stdio.h>
void main()
{
    /*To Toggle a Particular bit */
    int data, n;
    printf("Enter the datament:");
    scanf("%d", &data);
    printf("Enter the bit position:");
    scanf("%d", &n);
    data = (data ^ 1 << n); // Toggle the nth position of bit
    printf("Bit has been Toggled: %d", data);
    
}