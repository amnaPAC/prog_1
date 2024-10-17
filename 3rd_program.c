#include<stdio.h>
#include<conio.h>

void main()
{
    float temp;
    printf("Enter tempreture in celcius:");
    scanf("%f",&temp);
    printf("%f Celcius is about %f Fahrenhiet",temp,(temp * 9 / 5)+ 32);
    getch();
}