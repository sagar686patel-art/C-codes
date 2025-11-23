#include<stdio.h>
int main()
{
 int year;
 printf("Enter year:");
 scanf("%d",&year);
 if(year%100==0)
 {
  printf("%d is century year.",year);
 }
 else
 {
  printf("%d is not a century year.",year);
 }
}   