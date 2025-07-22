#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
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
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n\t------- before sort :");
    print_array(a,n);

    InsertionSort(a,n);
    
    printf("\n\n\t------- after sort : ");
    print_array(a,n);

    return 0;
}