/*

1
12
123
1234

*/

#include<stdio.h>
void main(){
int num,i,j;
printf("Enter a number: ");
scanf("%d",&num);
int count=1;

for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    count++;
    printf("\n");
}
}