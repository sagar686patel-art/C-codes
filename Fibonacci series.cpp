#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,crr=0;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("0\n1\n");
    for(int i=1; i<=n-2; i++)
    {
      crr=t1+t2;
      printf("%d\n",crr);
      t1=t2;
      t2=crr;
    }  
}

