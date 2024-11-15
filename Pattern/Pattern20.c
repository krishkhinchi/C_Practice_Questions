/*
Star Plus Pattern #2

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
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(i==2||j==2) printf("*");
        else printf(" ");
    }        
    printf("\n");
}
getch();
}