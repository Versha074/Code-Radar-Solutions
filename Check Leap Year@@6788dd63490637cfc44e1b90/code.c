#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if(year %400==0 && year %4==0 && year%100==0) {
        printf("Leap Year");
        if(year==2024){
            printf("Not a Leap Year");
        }
    } else {
        printf("Not a Leap Year");
    }

    return 0;

}