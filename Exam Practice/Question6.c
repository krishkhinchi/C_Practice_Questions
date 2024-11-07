//Write a program to find a maximum from given two numbers.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);

if(a>b){
    printf("Maximum number is %d",a);
} else if(b>a){
    printf("Maximum number is %d",b);
} else{
    printf("Both numbers are equal");
}
getch();
}