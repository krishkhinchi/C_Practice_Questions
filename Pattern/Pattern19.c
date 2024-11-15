/*
Star Cross Pattern

*   *
 * *
  *
 * *
*   *

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j;

for(i=0;i<5;i++){
    if(i==0||i==4){
        for(j=0;j<5;j++){
            if(j==0||j==4){
                printf("*");
            } else{
                printf(" ");
            }
        }
    } else if(i==1||i==3){
        for(j=0;j<5;j++){
            if(j==1||j==3){
                printf("*");
            } else{
                printf(" ");
            }
        }
    } else{
        for(j=0;j<5;j++){
            if(j==2){
                printf("*");
            } else{
                printf(" ");
            }
        }
    } printf("\n");
}
getch();
}