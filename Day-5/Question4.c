#include <stdio.h>

int main()
{
    long long num,largestfactor=0;
    int i;

    printf("enter a number:");
    scanf("%lld",&num);

    for(i=2; i<=num;i++)
    {
        while(num%i==0)
        {
            largestfactor=i;
            num/=i;

        }
    }
    printf("largest prime factor=%lld\n",largestfactor);

    return 0;
}