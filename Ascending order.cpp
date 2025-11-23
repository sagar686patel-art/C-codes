#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b && b<c)
 {
  printf("Ascending order:%d% d% d",a,b,c);
 }
 else if(a<c && c<b)
      {
       printf("Ascending order:%d %d %d",a,c,b);
      }
      else if(b<a && a<c)
           {
            printf("Ascending order:%d %d %d",b,a,c);
           }
           else if(b<c && c<a)
           {
            printf("Ascending order:%d %d %d",b,c,a);
           }
           else if(c<a && a<b)
                {
                 printf("Ascending order:%d %d %d",c,a,b);
                }
                else
                {
                 printf("Ascending order:%d %d %d",c,b,a);
                }
}                   
                     