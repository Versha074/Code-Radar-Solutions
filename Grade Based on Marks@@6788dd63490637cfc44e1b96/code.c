#include <stdio.h>

int main() {
    int marks;
    scanf("%d",&marks);
    if(ch>=90) {
        printf("A",marks);
    } else if(ch>=80 && ch<=90) {
        printf("B",marks);
    } else if(ch>=70 && ch<=80) {
        printf("C",marks);
    } else if(ch>=60 && ch<=70) {
        printf("D",marks);
    } else {
        printf("F",marks);
    }
    return 0;
}