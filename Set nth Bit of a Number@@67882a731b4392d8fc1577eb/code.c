#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<0 || b>31){
        printf("Invalid");
    }else {
        int bitval= (a>>b)&1;
        printf("%d",bitval);
    }
    return 0;
}