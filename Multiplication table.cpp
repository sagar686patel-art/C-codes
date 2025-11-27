#include<stdio.h>
int main()
{
    int fac=1;
    int i;
    int n=1;
    int m;
    printf("Enter number:");
    scanf("%d",&i);
    while(n<=10) {
        m=i*n;
        printf("%d x %d = %d\n",i,n,m);
        n+=1;
    }
}