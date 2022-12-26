#include <stdio.h>



int main()

{

    int c,r,i,j;

    printf("Enter number of rows and columns : ");

    scanf("%d %d",&r,&c);

    int arr[r][c];

    printf("\nEnter element : ");

    for(i=0;i<r;i++)

    {

        for(j=0;j<c;j++)

        {

          scanf("%d",&arr[i][j]);

       }

    }

    printf("\nOriginal array is : \n");

    for(i=0;i<r;i++)

    {

        for(j=0;j<c;j++)

        {

            printf("%d\t",arr[i][j]);

        }

        printf("\n");

    }

    printf("\nTranspose array is : \n");

    for(i=0;i<c;i++)

    {

        for(j=0;j<r;j++)

        {

            printf("%d\t",arr[j][i]);

        }

        printf("\n");

    }

     printf("This code is written by ABDUL QADIR");

    return 0;

}
