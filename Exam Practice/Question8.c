// Write a program to find a maximum from given three numbers.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c,Max;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);

if(!(a==b&&b==c)){
    if(a>=b&&a>=c){
        Max=a;
    } else if(b>=a&&b>=c){
        Max=b;
    } else if(c>=a&&c>=b){
        Max=c;
    } 
    printf("The Number %d is Greatest",Max);
} else{
    printf("All numbers are equal");
}
getch();
}