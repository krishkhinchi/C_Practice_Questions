// Write a C program to copy one string into another string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
clrscr();

char str1[100],str2[100];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);

strcpy(str1,str2);
printf("The First String = %s\n",str1);
printf("The Second String = %s",str2);

getch();
}