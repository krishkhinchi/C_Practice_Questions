/*
Number & Alphabet Triangle

1
AB
123
ABCD
12345

*/

#include<stdio.h>
void main(){
int input,i,j;
printf("Enter the number of rows: ");
scanf("%d",&input);

for(i=1;i<=input;i++){
    int num=1;
    char ch='A';
    if(i%2!=0){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
    } 
    else if(i%2==0){
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
    }
    printf("\n");
}
}