/*
*
**
***
****
*****
*/

#include<stdio.h>
void main(){
int row,i,j;
printf("Enter number of Rows: ");
scanf("%d",&row);

for(i=0;i<row;i++){
    for(j=0;j<=i;j++){
        printf("*");
        }
    printf("\n");
    }
}