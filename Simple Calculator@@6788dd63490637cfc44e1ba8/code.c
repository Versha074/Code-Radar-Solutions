#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d",&a,&b);
    scanf("%ch",&ch);
    ch=a+b;
    printf("%d",ch);
    return 0;
}