/* binary search
    condition : array must be sorted
*/
 

# include<stdio.h>
# include<conio.h>

void sort_array(int a[])
{
    int i,j,temp;
    for(i=0; i<15-1; i++)
    {
        for(j=0; j<15-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n Array after sort : ");

    for(i=0;i<15;i++)
    {
        printf("\nelement at position %d : %d",i,a[i]);
    }
}

int binary_search(int a[], int element)
{
    int low, mid, high;
    low = 0;
    high = 15-1;

    while(low<=high)
    {
        mid = (low + high)/2;

        if(a[mid] == element)
        {
            return mid;
        }

        if(a[mid]<element)
        {
            low = mid+1;
        }
        else 
        {
            low = mid-1;
        }
    }
    return -1;
}

void main()
{
    int n,i,result,a[15];

    for(i=0; i<15; i++){
         printf("\nEnter element of array : ");
         scanf("%d",&a[i]);
    }

    sort_array(a);

    printf("\n\nenter element to search :");
    scanf("%d",&n);
    
    result = binary_search(a,n);

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

