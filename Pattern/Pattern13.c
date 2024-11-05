/*
Alphabet Triangle

A
AB
ABC
ABCD

*/

#include<stdio.h>
void main(){
int input,i,j;
printf("Enter a number: ");
scanf("%d",&input);
for(i=0;i<input;i++){
    char ch='A';
    for(j=0;j<=i;j++){
        printf("%c",ch);
        ch++;
    }
    printf("\n");
}
}