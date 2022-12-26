#include<stdio.h>
void merge(int a[], int beg ,int mid, int end)
{
    int i j k;
    int n1=mid-beg+1;
    int n2=end-mid;

    int LeftArray[n1], RightArray[n2];
    i=0;
    j=0;
    k=beg;

    while(i<n1 && j<n2)
    {
        if(LeftArray[i]<=RightArray[j])
        {
            a[k]=RightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=LeftArray[i];
        i++;
        k++;

    }
}

