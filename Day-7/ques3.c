#include <stdio.h>

int sumdigits(int n){
    if(n==0)
    return 0;
    return(n%10)+sumdigits(n/10);
}

int main()
{
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    printf("sum of digits =%d\n",sumdigits(num));

    return 0;
}