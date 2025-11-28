#include<stdio.h>
int main ()
{
 int b,e,r=1,l=0;
 printf(" Enter Base and exp:");
 scanf("%d %d",&b,&e);
 while(l<e){
 r*=b;
 l++;
 }
 printf("%d",r);
 }
 