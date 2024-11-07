// Write C program to print range of 101 to 130 using array.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int Array[30],i; // (130-101) + 1 = 30

printf("[");
for(i=0;i<30;i++){
    Array[i]=101+i;
    printf("%d,",Array[i]);
}
printf("]");

getch();
}