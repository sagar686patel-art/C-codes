#include<stdio.h>
int main()
{
    float temp,fah;
    printf("Enter temperature(celcius):");
    scanf("%f",&temp);
    fah=(1.8*temp)+32;
    printf("Temperature in Farhaneit:%.3f",fah);
}