/*
Hollow Rectangle Pattern

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
    if(!(i==0||i==3)){
        for(j=0;j<10;j++){
            if(!(j==0||j==9)){
                printf(" ");
            } else{
                printf("*");
            }
        }
    } else{
        for(j=0;j<10;j++){
            printf("*");
        }
    } printf("\n");
}
getch();
}