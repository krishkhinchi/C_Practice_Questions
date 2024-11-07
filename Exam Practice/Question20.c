// Write a C program to find the addition of two values using function.

#include<stdio.h>
#include<conio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
clrscr();
int no1, no2, sum; 

printf("Enter the first number: ");
scanf("%d", &no1);

printf("Enter the second number: ");
scanf("%d", &no2);

sum = add(no1, no2);
printf("The sum of %d and %d = %d\n", no1, no2, sum);

return 0;
getch();
}