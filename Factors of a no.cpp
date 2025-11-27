#include<stdio.h>
int main()
{
 int i;
 printf("Enter number:");
 scanf("%d",&i);
 int x=1;
 while(x<=i)
 {
  if(i%x==0)
  {
  printf("%d\n",x);
  }
  x+=1;
 }
} 