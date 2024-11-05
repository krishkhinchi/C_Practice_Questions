/*
Horizontal Alphabet Square

ABCD
ABCD
ABCD
ABCD

*/

#include <stdio.h>
int main() {
    int i;
    char j;
    for(i=0;i<4;i++){
        for(j='A';j<='D';j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}