# include<stdio.h>
# include<conio.h>


int linear_search(int a[], int element)
{
    int i;
    for(i=0; i<5; i++)
    {
        if(a[i]==element)
        {
            return i;
        }
    }
        return -1;
}

void main()
{
    int n,i,result,a[5];

    for(i=0; i<5; i++){
         printf("Enter element of array : ");
         scanf("%d",&a[i]);
    }

    printf("\nenter element to search :");
    scanf("%d",&n);
    
    result = linear_search(a,n);

    if(result == -1)
    {
        printf("\nElement %d is not found!!! ",n);
    }
    else 
    {
        printf("\nElelment %d found at %d ",n,result);
    }
    getch();
}