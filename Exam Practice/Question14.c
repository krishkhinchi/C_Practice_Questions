// Write a C program to print the 3x3 array. 

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j;
int Array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
printf("The 3x3 Array is: \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",Array[i][j]);
    }
    printf("\n");
}
getch();
}