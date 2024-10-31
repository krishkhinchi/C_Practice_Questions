/*

1234
123
12
1

*/

#include<stdio.h>
void main(){
int num,i,j;
printf("Enter a number: ");
scanf("%d",&num);
int count=num;

for(i=1;i<=num;i++){
    for(j=1;j<=count;j++){
        printf("%d",j);
    }
    count--;
    printf("\n");
}
}