// Write a C program to print a multiplication table from 1 to 12.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j;
for(i=1;i<=12;i++){
    for(j=1;j<=10;j++){
        int Table=i*j;
        printf("%d x %d = %d\n",i,j,Table);
    }
    printf("\n");
}
getch();
}