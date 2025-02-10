#include <stdio.h>
unsigned int tognthbit(unsigned int num,int bitpos){
    return num^(1<<bitpos);
}

int main() {
    unsigned int num;
    int bitpos;
    scanf("%d %d",&num,&bitpos);
    unsigned result=tognthbit(num,bitpos);
    printf("%u",result);
    return 0;
}