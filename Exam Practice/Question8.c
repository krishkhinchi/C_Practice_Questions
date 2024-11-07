// Write a program to find a maximum from given three numbers.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);

if(a>b&&a>c){
    printf("Maximum number is %d",a);
} else if(b>a&&b>c){
    printf("Maximum number is %d",b);
} else if(c>a&&c>b){
    printf("Maximum number is %d",c);
} else{
    printf("All numbers are equal");
}
getch();
}