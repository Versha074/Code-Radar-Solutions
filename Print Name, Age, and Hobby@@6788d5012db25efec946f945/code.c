#include <stdio.h>

int main() {
    int age;
    char name[100];
    char hobby[100];
    scanf("%d",&age);
    scanf("%s",&name);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);

    return 0;

}