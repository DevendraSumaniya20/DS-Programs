#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5];

    for(i=0;i<=4;i++)
    {
        printf("enter the %d element : ",i);
        scanf("%d",&a[i]);
    }

   for(i=0;i<=4;i++)
    {
        printf(" %d element %d: ",i,a[i]);
        //scanf("%d",&a[i]);
    } 
}