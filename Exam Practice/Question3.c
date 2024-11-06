//Write a C program to find the area of a circle using the formula: Area = PI * r2.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float PI=3.141592;
float Radius,Area;
printf("Enter value of r:");
scanf("%f",&Radius);
Area=PI*Radius*Radius;
printf("%f",Area);
getch();
}