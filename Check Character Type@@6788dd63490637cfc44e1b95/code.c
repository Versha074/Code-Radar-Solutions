#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u'||ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }else if(isdigit(ch)) {
        printf("Digit");
    } else if(isalpha(ch)) {
        printf("Consonant");
    } else {
        printf("Special Character");
    }

    return 0;
}