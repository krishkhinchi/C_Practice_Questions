/*
Odd Number Teiangle

1
13
135
1357

*/

#include<stdio.h>
void main(){
int user,i,j;
printf("Enter a number of rows: ");
scanf("%d",&user);

for(i=1;i<=user;i++){
    for(j=1;j<=i*2;j+=2){
        printf("%d",j);
    }
    printf("\n");
}
}