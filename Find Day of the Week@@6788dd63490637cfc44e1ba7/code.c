#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a==1) {
        printf("Monday",a);
    }else if(a==2) {
        printf("Tuesday",a);
    }else if(a==3) {
        printf("Wednesday",a);
    }else if(a==4) {
        printf("Thrusday",a);
    }else if(a==5) {
        printf("Friday",a);
    }else if(a==6) {
        printf("Saturday",a);
    }else if(a==7) {
        printf("Sunday",a);
    }else {
        printf("Invalid",a);
    }

    return 0;
}