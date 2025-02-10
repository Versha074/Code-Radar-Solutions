#include <stdio.h>

int hehe(unsigned int num){
    if(num==0) return -1;
    int position=0;
    while((num&1)==0){
        position++;
        num>>=1;
    }
    return position;
}
int main(){
    unsigned int num;
    scanf("%d",&num);
    scanf("%u",&num);
    int phone=hehe(num);
    printf("%d",phone);
    return 0;
}