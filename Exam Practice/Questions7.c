//Write a program to find a minimum from given two numbers.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);

if(a>b){
    printf("Minimum number is %d",b);
} else if(b>a){
    printf("Minimum number is %d",a);
} else{
    printf("Both numbers are equal");
}
getch();
}