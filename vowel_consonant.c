#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if('a'==ch||'e'==ch||'i'==ch||'o'==ch||'u'==ch||'A'==ch||'E'==ch||'I'==ch||'O'==ch||'U'==ch){
        printf("%c is an VOWEL",ch);
    }else 
    printf("%c is a CONSONANT",ch);
}
