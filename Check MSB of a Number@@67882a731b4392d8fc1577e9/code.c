#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    printf("%d",number);
    if(number & 1) {
        printf("Set",number);
    } else {
        printf("Not Set",number);
    }
    return 0;
}