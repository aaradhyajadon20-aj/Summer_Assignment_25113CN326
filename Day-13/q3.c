#include <stdio.h>
int main()
{
    int a[5], i, lar, small;

    printf("enter the 5 elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    lar=small=a[0];

    for(i=1; i<5;i++)
    {
        if(a[i]>lar)
        lar=a[i];

        if(a[i]<small)
        small=a[i];

    }
    printf("largest elemts= %d\n",lar);
    printf("smallest element=%d", small);

    return 0;
}