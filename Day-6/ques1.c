#include <stdio.h>

int main ()
{
    int num;
    long long bin=0;
    int place=1;

    printf("enter a decimal number:");
    scanf("%d", &num);

    while (num>0){
        int bit= num%2;
        bin=bin+(bit*place);
        place=place*10;
        num=num/2;
    }
    printf("binary equivalent=%lld",bin);

    return 0;
}