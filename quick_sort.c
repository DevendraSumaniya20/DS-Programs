#include<stdio.h>
#include<conio.h>

void quicksort(int [10],int,int); 
void print_array(int [], int );


void main()
{
    int x[20],size,i;

    printf("\n\t------- Quick sorting method	\n\n");

    printf("\nEnter size of the array: "); 
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("Enter %d element : ",i+1); 
        scanf("%d",&x[i]);
    }

    printf("\n\n\t------- before sort :");
    print_array(x,size);

    quicksort(x,0,size-1);

    
    
    printf("\n\n\t------- after sort : ");
    print_array(x,size);

    getch();
}

void quicksort(int x[10],int first,int last)
{ 
    int pivot,j,temp,i;

    if(first<last)
    { 
        pivot=first; 
        i=first; 
        j=last;

        while(i<j)
        { 
            while(x[i]<=x[pivot]&&i<last)
            i++;
            while(x[j]>x[pivot]) 
            j--;
            if(i<j)
            {
                temp=x[i]; 
                x[i]=x[j]; 
                x[j]=temp;
            }
        }

        temp=x[pivot];       
        x[pivot]=x[j]; 
        x[j]=temp; 
        quicksort(x,first,j-1); 
        quicksort(x,j+1,last);

    }
}


void print_array(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nelement at position %d : %d",i+1,arr[i]);
    }
}