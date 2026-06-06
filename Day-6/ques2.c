#include <stdio.h>

int main()
{
    long long binary;
    int decimal=0,base=1,digit;

    printf("enter a binary number:");
    scanf ("%lld",&binary);

    while (binary>0){
        digit=binary%10;
        decimal=decimal+(digit*base);

        base=base*2;
        binary=binary/10;
    }
    printf("decimal equivalent=%d,decimal");

    return 0;

}