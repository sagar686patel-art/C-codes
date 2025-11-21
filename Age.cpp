#include<stdio.h>
int main()
{
 int age;
 printf("Enter age:");
 scanf("%d",&age);
 if(age<=12)
 {
  printf("you are a child.");
 }
 else if(age<=19)
      {
       printf("you are a teen.");
      }
      else if(age<=45)
            {
             printf("you are a adult.");
            } 
            else 
            {
             printf("you are a senior.");
            }
}             