// Write a C program to find addition of 45 to 65 using loop.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int sum=0;
for(int i=45;i<=65;i++){
    sum+=i;
}
printf("The sum 45 to 65 = %d",sum);
getch();
}