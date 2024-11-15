/*
Star Plus Pattern #1

  *
  *
*****
  * 
  * 

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int k,i,j;
for(i=0;i<5;i++){
    if(!(i==2)){
        for(j=0;j<5;j++){
            if(!(j==2)){
                printf(" ");
            } else{
                printf("*");
            }
        }        
    } else{
        for(j=0;j<5;j++){
            printf("*");
        } 
    } printf("\n");
}
getch();
}