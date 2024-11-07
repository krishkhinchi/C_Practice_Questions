//Write a program to find a minimum from given three numbers.

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

if(b>a&&c>a){
    printf("Minimum number is %d",a);
} else if(a>b&&c>b){
    printf("Minimum number is %d",b);
} else if(a>c&&b>c){
    printf("Minimum number is %d",c);
} else{
    printf("All numbers are equal");
}
getch();
}