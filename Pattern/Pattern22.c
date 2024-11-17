/*
Triangle Pattern with Space #4

    *
   **
  ***
 ****
*****

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,k,rows;

printf("Enter number of rows: ");
scanf("%d",&rows);

for(i=0;i<rows;i++){
    for(j=rows;j>i;j--) printf(" ");
    for(k=0;k<=i;k++) printf("*");
    printf("\n");
}

getch();
}