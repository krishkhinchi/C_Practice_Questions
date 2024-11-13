// Write a program to convert days into years, months and days.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int days,months,years;
printf("Enter number of days: ");
scanf("%d",&days);
    
years=days/365;
days=days%365;
months=days/30;
days=days%30;

printf("Years: %d\n",years);
printf("Months: %d\n",months);
printf("Days: %d",days);

getch();
}