#include <stdio.h>

int main()
{
    int a[5],i,even=0, odd=0;

    printf("enter 5 elements:\n");

    for(i=0;i<5; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("number of even elements=%d\n",even);
    printf("number of add elements=%d",odd);

    return 0;
}