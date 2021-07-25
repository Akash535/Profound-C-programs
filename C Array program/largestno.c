#include<stdio.h>
void main(){
    int a[10][10],i,j,max,maxr,maxc;
    printf("enter the element in 5*5 array\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Array is:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    max=a[0][0];
    for(i=0;i<5;i++){
       
        for(j=0;j<5;j++){
            
            if(max<a[i][j]){
                max=a[i][j];
                maxr=i;
                maxc=j;
            }
        }
    }
    printf("largest no is %d ",max);

}