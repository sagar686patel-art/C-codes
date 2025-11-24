#include<stdio.h>
int main()
{
 int m;
 printf("Enter month number:");
 scanf("%d",&m);
 if(m>=3 && m<=5)
 {
  printf("Spring.");
 }
 else if(m>=6 && m<=8)
      {
       printf("Summer.");
      }
      else if(m>=9 && m<=11)
           { 
            printf("Autumn.");
           }
           else if(m==1 || m==2 || m==12)
                {
                 printf("Winter.");
                }
                else
                {
                 printf("You are out of this Earth.You must check your general knowledge.");
                }
}             