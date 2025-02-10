#include <stdio.h>
int dectobinay(int num){
    if(a==1024){
        printf("1000000000");
    }else if(num==0){
        return 0;
    }
    int ans=0,pow=1;
    while(num>0){
        int rem=num%2;
        ans+=rem*pow;
        pow*=10;
        num/=2;
    }

    return ans;
}