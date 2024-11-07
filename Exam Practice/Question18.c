// Write a C program to concate (merge) the two strings.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

char str1[100],str2[100];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);

strcat(str1,str2);
printf("The String after concatenation is '%s'",str1);

getch();
}