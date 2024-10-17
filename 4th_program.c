#include<stdio.h>
#include<conio.h>

void main()
{
    float temp;
    printf("Enter tempreture in celcius:");
    scanf("%f",&temp);
    printf("%f Fahrenhiet is about %f Calcius",temp,((temp-32)*5/9));
    getch();
}