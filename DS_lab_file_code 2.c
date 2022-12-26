#include<stdio.h>

int main()

{

    int i, j, m, n;

    printf("Enter the order of the matrix:");

    scanf("%d %d",&m,&n);

    int a[m][n],b[m][n],s[m][n];

    printf("Matrix A:");

    for(i=0; i<m; i++)

    {

        for(j=0; j<n; j++)

        {

            scanf("%d", &a[i][j]);

        }



    }

     printf("Matrix B:");

    for(i=0; i<m; i++)

    {

        for(j=0; j<n; j++)

        {

            scanf("%d", &b[i][j]);

        }



    }

    for(i=0; i<m; i++ )

    {

        for(j=0; j<n; j++)

        {

            s[i][j] = a[i][j]+b[i][j];



        }



    }

    printf("Addition Value:\n");

  for(i=0; i<m; i++)

  {

    for(j=0; j<n; j++)

    {

      printf("\t%d",s[i][j]);

    }

    printf("\n");

  }

  printf("\nThis code is written by ABDUL QADIR");

 return 0;

}
