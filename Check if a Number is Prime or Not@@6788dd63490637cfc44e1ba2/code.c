#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    int count=0;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Prime");
    }else {
        printf("Not Prime");
    }
    return 0;

}