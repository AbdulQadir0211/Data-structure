#include<stdio.h>
void odd();
void even();
int n=1;
int main()
{
    odd();
}

void odd()
{
    if(n<=10){
        printf("%d\t",n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n<=10){
        printf("%d\t",n-1);
        n++;
        odd();
    }
    return;
}
