#include<stdio.h>
int main(){
    int a[10],b[10],c[10],d[10],i,j,k;
    for(i=0;i<10;i++){
        printf("Enter the elements array A : ");
        scanf("%d",&a[i]);
    }
    printf("Array A is: ");
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }



    for(k=0;k<10;k++){
        printf("\nEnter the elements array B : ");
        scanf("%d",&b[k]);
    }
    printf("Array B is: ");
    for(k=0;k<10;k++){
        printf("%d",b[k]);
    }
    printf("\n Sum of the array is : ");
    for(j=0;j<10;j++){
        c[j]=a[i]+b[k];
        d[j]=a[i]-b[k];
    }
    for(i=0;i<10;i++)
    printf("%d\n",c[i]);
    printf("%d\n",d[i]);


}
