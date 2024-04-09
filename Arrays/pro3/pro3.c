#include <stdio.h>
#include <stdlib.h>


int main(){
    int a[6],i,j,min,max,n,temp,k;
    n=6;
    for(i=0;i<n;i++){
        printf("Enter the value for position %d\n ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the kth element you want to find:");
    scanf("%d",&k);
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
               temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
   
    }
    
    min= a[k-1];
    max= a[n-k];
    printf("The maximum element in the array is %d\n",max);
    printf("The minimum element in the array is %d\n",min);
    return 0;

    
}