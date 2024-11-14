/*
Number Triangle of next number in every next line.

1
23
456
78910

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int k=1,i,j;
for(i=0;i<4;i++){
    for(j=0;j<=i;j++){
        printf("%d",k);
        k++;
    }
    printf("\n");
}
getch();
}