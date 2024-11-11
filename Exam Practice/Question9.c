//Write a program to find a minimum from given three numbers.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c,Min;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);

if(!(a==b&&b==c)){
    if(b>=a&&c>=a){
        Min=a;
    } else if(a>=b&&c>=b){
        Min=b;
    } else if(a>=c&&b>=c){
        Min=c;
    } 
    printf("The Number %d is Lowest",Min);
} else{
    printf("All numbers are equal");
}
getch();
}