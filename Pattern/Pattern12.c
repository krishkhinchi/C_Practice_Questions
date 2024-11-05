/*
Horizontal Alphabet Square #2
Trying with ASCII value

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
        /*
        This are ASCII values of these characeter

        65 -> A
        66 -> B
        67 -> C
        68 -> D

        */
        int a=65;
        for(j=0;j<user_input;j++){
            char ch=(char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}