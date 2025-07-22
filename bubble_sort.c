#include<stdio.h>
#include<conio.h>

void bubble_sort(int *a, int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void print_array(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nelement at position %d : %d",i+1,a[i]);
    }
}

void main()
{
    int n,i;
    int a[n];
    printf("\n\t------- bubble sorting method	\n");


    printf("\nenter the size : ");
    scanf("%d",&n);
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("enter elements %d : ",i+1);
        scanf("%d", &a[i]);
    }

    printf("\n\n\t------- before sort :");
    print_array(a,n);

    bubble_sort(a,n);
    printf("\n\n\t------- after sort : ");
    print_array(a,n);    
}




