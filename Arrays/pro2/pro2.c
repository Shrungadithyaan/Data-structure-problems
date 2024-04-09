#include <stdio.h>
#include <stdlib.h>


int main(){
    int a[5],i,min,max;

    for(i=0;i<5;i++){
        printf("Enter the value for position %d\n ",i+1);
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];
    for(i=0;i<5;i++){
        
        if(max<a[i])
        max=a[i];

        if(min>a[i])
        min=a[i];
    }

    printf("The maximum element in the array is %d\n",max);
    printf("The minimum element in the array is %d\n",min);
    
    return 0;   
}