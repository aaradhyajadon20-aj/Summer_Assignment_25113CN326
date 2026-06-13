#include <stdio.h>

int main()

{
    int arr[100], n, i;

printf("enter the number of elements:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
}

printf("array elemts are:\n");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
