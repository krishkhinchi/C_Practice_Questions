/*Write a C program to print the multiply, addition, 
division & subtraction value of two accepted 
numbers.*/ 

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int Num1,Num2;
printf("Enter Number 1 and 2: ");
scanf("%d%d",&Num1,&Num2);

int Multi=Num1*Num2;
printf("The multiplication of Number 1 and 2 is = %d\n",Multi);

int Sum=Num1+Num2;
printf("The sum of Number 1 and 2 is = %d\n",Sum);

int Div=Num1/Num2;
printf("The division of Number 1 and 2 is = %d\n",Div);

int Sub=Num1-Num2;
printf("The subtraction of Number 1 and 2 is = %d",Sub);
getch();
}