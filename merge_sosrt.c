#include<stdio.h>
#include<conio.h>

void merge(int [],int ,int ,int ); 
void part(int [],int ,int );
void print_array(int [], int );



void main()
{
    int arr[30]; 
    int i,size;

    printf("\n\t------- Merge sorting method	\n\n");

    printf("\nEnter total no. of elements : "); 
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("Enter %d element : ",i+1); 
        scanf("%d",&arr[i]);
    }

    printf("\n\n\t------- before sort :");
    print_array(arr,size);

    part(arr,0,size-1);

    printf("\n\n\t------- after sort : ");
    print_array(arr,size);  
    
        
    getch();
}


void part(int arr[],int min,int max)
{
    int mid; if(min<max)
    {
        mid=(min+max)/2; 
        part(arr,min,mid); part(arr,mid+1,max); merge(arr,min,mid,max);
    }
}


void merge(int arr[],int min,int mid,int max)
{
    int tmp[30]; int i,j,k,m; 
    j=min;
    m=mid+1;
 
    for(i=min; j<=mid && m<=max ; i++)
    {
        if(arr[j]<=arr[m])
        {
        tmp[i]=arr[j]; j++;
        }
        else
        {
        tmp[i]=arr[m]; m++;
        }
    }

    if(j>mid)
    {
        for(k=m; k<=max; k++)
        {
         tmp[i]=arr[k]; i++;
        }
    }
    else
    {
        for(k=j; k<=mid; k++)
        {
        tmp[i]=arr[k]; i++;
        }
    }

    for(k=min; k<=max; k++) 
    arr[k]=tmp[k];
}

void print_array(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nelement at position %d : %d",i+1,arr[i]);
    }
}
