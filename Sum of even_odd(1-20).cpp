#include<stdio.h>
int main()
{
    int e=0,o=0;
    for(int i=1;i<=20;i++)
    {
     if(i%2==0)
     {
      e+=i;
     }
     else
     {
      o+=i;
     }
    }
    printf("Sum of even: %d and Sum of odd: %d",e,o);   
}

