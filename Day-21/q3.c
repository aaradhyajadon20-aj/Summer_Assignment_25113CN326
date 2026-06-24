#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i=0, vowels=0, consonants=0; 

    printf("enter a string:");
    fgets(str, sizeof(str), stdin);

    while(str[i]!='\0'){
        char ch= tolower(str[i]);

        if(isalpha(ch)){
            if(ch=='a'||ch=='e'
                ||ch=='i'||ch=='o'||ch=='u')
                vowels++;
                else
                consonants++;
        }
        i++;
    }
    printf("number of vowels=%d\n",vowels);
    printf("number of sonsonants=%d\n", consonants);

    return 0;
}

