/*
Hollow Rectangle Pattern #2

**********
*        *
*        *
**********

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j;
for(i=0;i<4;i++){
    for(j=0;j<10;j++){
        if(i==0||i==3||j==0||j==9) printf("*");
        else printf(" ");
    }
    printf("\n");
}
getch();
}