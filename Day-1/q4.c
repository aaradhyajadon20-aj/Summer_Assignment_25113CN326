#include <stdio.h>

int main()
{
    long int value;
    int totaldigits= 0;

    printf("enter any number: ");
    scanf("%ld", &value);

    do{
        totaldigits++;
        value/=10;
    }
while (value!= 0);

printf("number of digits = %d", totaldigits);

return 0;
}
