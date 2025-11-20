#include<stdio.h>
int main()
{
  int base;
  int height;
  printf("Enter base and height:");
  scanf("%d%d",&base,&height);
  int area;
  area=0.5*base*height;
  printf("Area=%d",area);
}  