#include<stdio.h>
int total(int d,int m,int y);
//Vasavi College of engineering
//1602-19-734-004
//E.E.E.
int main()
{
int d,m,y,j,c=0,e,f,a;
printf("Enter present year(0000-10000) ");
scanf("%d",&y);
printf("Enter present month(1-12) ");
scanf("%d",&m);
printf("Enter today's date(1-31) ");
scanf("%d",&d);
for(j=0;j<y;j++)
{
if(j%4==0)
c=c+366;
else
c=c+365;
}
e=total(d,m,y);
f=(e+c+5)%7;
if(f==0)
printf("Saturday");
else if(f==1)
printf("Sunday");
else if(f==2)
printf("Monday");
else if(f==3)
printf("Tuesday");
else if(f==4)
printf("Wednesday");
else if(f==5)
printf("Thursday");
else
printf("Friday");
}
int total(int d, int m,int y)
{
int t;
if(m==1)
t=d;
else if(m==2)
t=31+d;
else if(m==3)
t=31+28+d;
else if(m==4)
t=31+28+31+d;
else if(m==5)
t=31+28+31+30+d;
else if(m==6)
t=31+28+31+30+31+d;
else if(m==7)
t=31+28+31+30+31+30+d;
else if(m==8)
t=31+28+31+30+31+30+31+d;
else if(m==9)
t=31+28+31+30+31+30+31+31+d;
else if(m==10)
t=31+28+31+30+31+30+31+31+30+d;
else if(m==11)
t=31+28+31+30+31+30+31+31+30+31+d;
else if(m==12)
t=31+28+31+30+31+30+31+31+30+31+30+d;
if((y%4==0)&&(m>2))
t=t+1;
return t;
}