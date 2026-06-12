#include <stdio.h>

int perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    return 1;
    else
    return 0;
}
int main()
{
    int num;

    printf("enter a number:");
    scanf("%d", &num);

    if(perfect(num))
    printf("perfect number\n");
    else
    printf("not a perfect number\n");

    return 0;
}