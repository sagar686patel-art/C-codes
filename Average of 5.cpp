#include<stdio.h>
int main()
{
  float n,a,b,c,d,e;
  printf("Enter 5 numbers:");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  n=(a+b+c+d+e)/5;
  printf("Average of given 5 numbers:%f",n);