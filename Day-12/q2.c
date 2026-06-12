#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int n1=n, sum=0, digit, count=0;

    while(n1>0)
    {
        count++;
        n1/=10;
    }
    n1=n;
    while(n1>0)
    {
        digit=n1%10;
        sum=+pow(digit,count);
        n1/=10;
    }
    if(sum==n)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(armstrong(n))
    printf("armstrong number\n");
    else
    printf("not an armstrong number\n");

    return 0;
}