#include<stdio.h>
int main()
{
 int n;
 printf("Enter number:");
 scanf("%d",&n);
 const char* res[]={"Even","Odd"};
 printf("%s\n",res[n%2]);
 return 0;
 }