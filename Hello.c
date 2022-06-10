#include<stdio.h>
void main(){
    int i, a[5],c;
    printf("enter the array");
    for(i=0; i<=5; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<=5; i++){
        printf("a[%d]=%d\n",i,a[i]*a[i]);
    }
   
}

    
    

   