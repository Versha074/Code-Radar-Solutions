#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b!=c) {
        printf("Scalene");
    } else if(a==b>c) {
        printf("Isoceles");
    } else {
        printf("Equilateral");
    }

    return 0;

}