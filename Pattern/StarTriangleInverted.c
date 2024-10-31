/*

*****
****
***
**
*

*/

#include<stdio.h>
void main(){
int i,j,row;
printf("Enter a number of row: ");
scanf("%d",&row);
int count=row;

for(i=0;i<row;i++){
    for(j=0;j<count;j++){
        printf("*");
    }
    count--;
    printf("\n");
}
}