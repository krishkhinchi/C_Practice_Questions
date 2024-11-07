// Write a C program to find the length of the given string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
clrscr();

char str[100];
printf("Enter the string: ");
scanf("%s",&str);

int length=strlen(str);
printf("%d",length);

getch();
}