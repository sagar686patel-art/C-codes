#include<stdio.h>
void uptr(int n)
{
 int nst1=1; 
 for(int i=1;i<=n;i++)
 {
  for(int nsp=n-1;nsp>=i;nsp--)
  {
   printf(" ");
  }
  for(int j=1;j<=nst1;j++)
  {
   printf("*");
  }
  nst1+=2;
  printf("\n");  
 }
}
void lwtr(int n)
{
 int nst2=2*n-1; 
 for(int i=1;i<=n;i++)
 {
  for(int nsp=1;nsp<=i-1;nsp++)
  {
   printf(" ");
  }
  for(int j=1;j<=nst2;j++)
  {
   printf("*");
  }
  nst2-=2;
  printf("\n");  
 }
}
int main()
{
 int n;
 int ch;
 printf("Enter number of lines: ");
 scanf("%d",&n);
 printf("Enter type of triangele\n(1) Upper Triangle\n(2) Lower triangle\n(Type 1 or 2 to choose.)");
 scanf("%d",&ch);
 if(ch==1)
 {
  uptr(n);
 }
 else if(ch==2)
 {
  lwtr(n); 
 }
 else
 {
  printf("Invalid.");
 }  
}