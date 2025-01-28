#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    if(number & 1) {
        printf("Set",number);
    } else {
        printf("Not set",number)
    }

    return 0;
}