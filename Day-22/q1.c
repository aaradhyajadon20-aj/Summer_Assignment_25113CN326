#include <stdio.h>

#include<string.h>

int main()
{
    char str[100];
    int i, len ,temp=1;

    printf("enter a string:");
scanf("%s", str);

len=strlen(str);

for(i=0; i<len/2; i++){
    if(str[i]!=str[len-i-1])
    {
        temp=0;
        break;

    }
}
if(temp)
printf("the string is a palindrome.\n");
else
printf("the string is not a pallindrome.\n");

return 0;
}