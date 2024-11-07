// Write a C program to show Month using Switch statement.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int Months;
printf("Enter a number b/w 1 to 12: ");
scanf("%d",&Months);

switch (Months)
{
case 1:
    printf("January");
    break;

case 2:
    printf("February");
    break;

case 3:
    printf("March");
    break;

case 4:
    printf("April");
    break;

case 5:
    printf("May");
    break;

case 6:
    printf("June");
    break;

case 7:
    printf("July");
    break;

case 8:
    printf("August");
    break;

case 9:
    printf("September");
    break;

case 10:
    printf("October");
    break;

case 11:
    printf("November");
    break;

case 12:
    printf("December");
    break;

default:
    printf("Plz enter number between 1 to 12");
    break;
}
getch();
}