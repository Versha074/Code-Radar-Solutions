#include <stdio.h>
int zero(unsigned int num) {
    int count=0;
    while((num & 1)==0 && num!=0){
        count++;
        num>>=1;
    }
    return count;
}
int main(){
    unsigned int numb;
    scanf("%u",&numb);
    int ice_cream=zero(numb);
    printf("%d",ice_cream);
    return 0;
}