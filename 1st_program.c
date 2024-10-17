#include<stdio.h>
#include<conio.h>

void main()
{
    int number_1;
    int number_2;
    printf("Enter two integers\n");
    scanf("%d %d",&number_1,&number_2);
    printf("The sum of %d and %d is: %d\n",number_1,number_2,number_1+number_2);
    getch();
}