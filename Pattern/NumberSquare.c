#include<stdio.h>
void main(){
int user,i,j;
printf("Enter a number: ");
scanf("%d",&user);
for(i=0;i<user;i++){
    int a=1;
    for(j=0;j<user;j++){
        printf("%d",a);
        a++;
    }
    printf("\n");
}
}