#include <stdio.h>
#inclue <ctype.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u'||ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel",ch);
    }else if(isdigit(ch)) {
        printf("Digit",ch);
    } else if(isalpha(ch)) {
        printf("Consonant",ch);
    } else {
        printf("Special Character",ch);
    }

    return 0;
}