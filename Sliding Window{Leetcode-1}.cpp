#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    int val=0,cnt=0, target;
    int k;
    printf("Enter target : ");
    scanf("%d",&target);
    printf("\nEnter count of numbers : ");
    scanf("%d",&n);
    printf("\nEnter size of pair : ");
    scanf("%d",&k);
    printf("\nEnter numbers : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-k; i++)
    {
        val=0;
        for(int j=i; j<i+k; j++)
        {
            val+=arr[j];
            if(val == target)
            {
                printf("( ");
                for(int p=i; p<i+k; p++)
                {
                    printf("%d ",arr[p]);
                }
                printf(") ");
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        printf("\nNo pair found!");
    }
    else
    {
        printf("\n%d pair found.",cnt);
    }
}