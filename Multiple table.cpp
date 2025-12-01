#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
      m=n*i;
      printf("%d x %d = %d\n",n,i,m);
    }  
}

