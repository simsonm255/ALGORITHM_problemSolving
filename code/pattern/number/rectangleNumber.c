#include <stdio.h>

int main()
{
    int n=1;
    scanf("%d",&n);
    int size = (n*2)-1;
    int k = size;
    int low=0;
    int high=size-1;
    int value = n;
    int a[size][size];
    int i=0,j=0;
    int t = k;
    //   while(i<k){
    //   	j=0;
    //     while(j<k){
    //         a[i][j]=0;
            
    //         j++;
    //     }
    //     i++;
    // }
    i=j=0;
    while(t!=0){
        
        j=low;
        while(j<=high){
           a[i][j]=value;
           j++;
        }
        j=low+1;
        while(j<=high){
            a[j][i]=value;
            j++;
        }
        j = low+1;
        while(j<=high){
            a[high][j]=value;
            j++;
        }
        j=low+1;
        while(j<high){
            a[j][high]=value;
            j++;
        }
        i = i +1;
        low = low+1;
        high = high - 1;
        value = value - 1;
       t--;
    }
    i=j=0;
    while(i<k){
    	j=0;
        while(j<k){
            printf("%d ",a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}