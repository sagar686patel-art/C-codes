#include<stdio.h>
int main()
{
    int i;
    int n;
    int lcm;
    printf("Enter number:");
    scanf("%d %d",&i,&n);
    while(lcm<=(i*n)) {if(i>n)
    {   lcm=i;
    } else {
        lcm=n;
    }


        if(lcm%n==0 && lcm%i==0)
        {
            printf("%d",lcm);
            break;
        }

        lcm++;

    }

}