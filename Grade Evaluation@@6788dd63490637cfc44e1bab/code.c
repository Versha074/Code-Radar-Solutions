#include <stdio.h>

int main() {
    int ch;
    scanf("%c",&ch);
    if(ch=='A') {
        printf("Excellent");
    } else if(ch=='B') {
        printf("Good");
    } else if(ch=='C') {
        printf("Average");
    } else if(ch=='D') {
        printf("Below Average");
    } else {
        printf("Invalid grade");
    }
    return 0;
}