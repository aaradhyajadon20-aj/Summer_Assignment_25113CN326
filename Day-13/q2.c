#include <stdio.h>
int main()
{
    int arr[5],i,sum=0;
    float avg;

    printf("enter the 5 elements:");

    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        sum= sum+arr[i];
    }
    avg=(float)sum/5;

    printf("sum=%d\n",sum);
    printf("average=%.2f" , avg);

    return 0;
}