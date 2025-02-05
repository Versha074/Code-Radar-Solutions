#include <stdio.h>

int main() {
    int cost_price;
    int selling_price;
    scanf("%d %d",&cost_price,&selling_price);
    if(cost_price<selling_price) {
        printf("Profit");
    } else if(cost_price==selling_price) {
        printf("No Profit No Loss");
    } else {
        printf("Loss");
    }

    return 0;
}