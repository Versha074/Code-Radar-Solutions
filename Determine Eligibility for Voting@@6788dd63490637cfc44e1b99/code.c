#include <stdio.h>

int main() {
    int age;
    scanf("%d",&age);
    if(age>=18) {
        printf("Eligibible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}