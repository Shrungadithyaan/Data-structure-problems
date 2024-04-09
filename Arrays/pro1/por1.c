#include <stdio.h>
#include <stdlib.h>


int main(){
    int a[5],i;

    for(i=0;i<5;i++){
        printf("Enter the value for position %d\n ",i+1);
        scanf("%d",&a[i]);
    }

    printf("The Elements present in the array are:\n");

    for(i=0;i<5;i++){
        
        printf("%d",a[i]);
    }

    printf("The reversed elements are:\n");
    for(i=4;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}