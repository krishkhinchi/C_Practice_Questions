// Write a C program to check whether a number is prime or not.

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int user,x,i;
printf("Enter a number: ");
scanf("%d",&user);
for(i=2;i<user;i++){
    if(user%i==0){
        x=1;
    }
}
if(x==1){
    printf("%d is not a Prime Number",user);
} else{
    printf("%d is a Prime Number",user);
}
getch();
}