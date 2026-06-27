#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag;

    printf("enter a string:");
    fgets(str,sizeof(str), stdin);

    for(i=0; str[i]!='\0'&& str[i]!='\n'; i++){
        flag=1;

        for(j=0; str[j]!='\0' && str[j]!='\n'; j++){
            if(i!=j && str[i]==str[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("first non-repeating character:%c\n", str[i]);
            return 0;
        }
    }
    printf("no non-repeating character found.\n");
    
    return 0;
}