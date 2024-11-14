// Write a C program to print all number from 1 to 100, skipping those divisible by 3 using continue.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
for(int i=1;i<=100;i++){
    if(i%3==0){
        continue;
    }
    printf("%d\n",i);
}
getch();
}