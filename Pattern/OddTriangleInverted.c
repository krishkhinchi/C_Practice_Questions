/*
Odd Number Triangle Inverted

1357
135
13
1

*/

#include<stdio.h>
void main(){
int rows,i,j;
printf("Enter number of rows: ");
scanf("%d",&rows);
int count=rows;

for(i=1;i<=rows;i++){
    for(j=1;j<=count*2;j+=2){
        printf("%d",j);
    }
    count--;
    printf("\n");
}
}