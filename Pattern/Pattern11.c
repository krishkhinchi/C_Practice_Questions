/*
Horizontal Alphabet Square #1

ABCD
ABCD
ABCD
ABCD

*/

#include <stdio.h>
int main() {
    int user_input,i,j;
    printf("Enter a number: ");
    scanf("%d",&user_input);
    for(i=0;i<user_input;i++){
        int a='A';
        for(j=0;j<user_input;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}