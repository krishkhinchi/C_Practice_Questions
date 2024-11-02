/*
1234
1234
1234
1234
*/

#include<stdio.h>
void main(){
int user,i,j;
printf("Enter a number: ");
scanf("%d",&user);
for(i=1;i<=user;i++){
    for(j=1;j<=user;j++){
        printf("%d",j);
    }
    printf("\n");
}
}