#include<stdio.h>
void selection_sort(int arr[], int n)
{
    for(int i=0 ; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
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
