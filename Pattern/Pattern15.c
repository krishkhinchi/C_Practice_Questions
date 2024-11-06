/*
Increasing Number & Alphabet Triangle Inverted

12345
ABCD
678
EF
9

*/

#include<stdio.h>
void main(){
int rows,i,j;
printf("Enter number of rows: ");
scanf("%d",&rows);

int num=1;
char ch='A';
int count=rows;
    
for(i=1;i<=rows;i++){
    if(i%2!=0){
        for(j=count;j>=1;j--){
            printf("%d",num);
            num++;
            }
        } else if(i%2==0){
            for(j=count;j>=1;j--){
                printf("%c",ch);
                ch++;
            }
        }
    count--;
    printf("\n");
}
}