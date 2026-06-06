#include <stdio.h>

int main()
{
    int x,n,i;
    int power=1;

    printf("enter a base:");
    scanf("%d",&x);

    printf("enter exponent:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        power=power*x;
    }

printf("answer=%d",power);

return 0;
}