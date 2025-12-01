#include<stdio.h>
int main()
{
    int e=1,n,o=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     if(i%2==0)
     {
      e*=i;
     }
     else
     {
      o*=i;
     }
    }
    printf("Sum of even factorial: %d \nSum of odd factorial: %d",e,o);   
}

    