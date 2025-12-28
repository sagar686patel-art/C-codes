#include<stdio.h>
int main()
{
    int a[5]= {9,7,5,3,2};
    int b[3]= {7,6,1};
    int m,n;
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(b)/sizeof(b[0]);
    int arr[m+n];
    int i=0,j=0,k=0;
    while(i<n && j<m) {
        if(a[i]>b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
    for(int l=0; l<n+m; l++)
    {
        printf("%d\t",arr[l]);
    }
    return 0;
}