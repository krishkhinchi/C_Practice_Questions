/*
1111
2222
3333
4444
*/

#include<stdio.h>
void main(){
int user,i,j;
printf("Enter a number: ");
scanf("%d",&user);
int count=1;

for(i=0;i<user;i++){
    for(j=0;j<user;j++){
        printf("%d",count);
    }
    printf("\n");
    count++;
}
}