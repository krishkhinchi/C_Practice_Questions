//Write a C program to swap a variable value of no1 and no2.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int no1,no2;
printf("Enter Number 1: ");
scanf("%d",&no1);
printf("Enter Number 2: ");
scanf("%d",&no2);

int temp;
temp=no1;
no1=no2;
no2=temp;

printf("Number 1 is %d\n",no1);
printf("Number 2 is %d\n",no2);
getch();
}