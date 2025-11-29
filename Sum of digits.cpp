#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter number:");
    scanf("%d",&i);
    int cnt=0;
    while(i>0) {
      
        x=i%10;
      cnt=cnt+x;  
        i=i/10;
    }
    printf("%d\n",cnt);
}