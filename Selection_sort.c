#include <stdio.h>
#include<conio.h>

void selection_sort();
void print_array();

int a[30], n;
void main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);


    printf("\n\n\t------- before sort :");
    print_array();

    selection_sort();
        
    printf("\n\n\t------- after sort : ");
    print_array();

    getch();
}
void selection_sort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}


void print_array()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nelement at position %d : %d",i+1,a[i]);
    }
}