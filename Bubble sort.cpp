#include<stdio.h>
void selection_sort(int arr[], int n)
{
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,a[50];
    printf("Enter count of numbers to be sorted : ");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    for(int i=0; i<n; i++)
    {
        printf("\n%d",a[i]);
    }
}
