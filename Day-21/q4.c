#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i=0;

    printf("enter a string:");
    fgets(str, sizeof(str), stdin);

    while(str[i]!='\0'){
        str[i]=toupper(str[i]);
        i++;

    }

    printf("uppercase string: %s,str");

    return 0;
}

