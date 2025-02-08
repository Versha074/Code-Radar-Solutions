#include <stdio.h>

int main() {
    float c;
    scanf("%f",&c);
    if(c<=0) {
        printf("Freezing");
    }else{
        printf("Above Freezing");
    }
    return 0;
}