#include <stdio.h>
unsigned int tognthbit(unsigned int num,int bitpos){
    return num^(1<<bitpose);
}

int main() {
    unsigned int num;
    int bitpos;
    scanf("%d %d",&num,&bitpose);
    unsigned result=tognthbit(num,bitpos);
    printf("%u",result);
    return 0;
}