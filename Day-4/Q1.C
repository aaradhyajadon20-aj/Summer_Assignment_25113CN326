#include <stdio.h>

int main()
{
    int term ,i;

    long long t1=0, t2=1, nextterm;

    printf("Number of terms in the fibonacci series:");
    scanf("%d", &term);

    printf("fibnocci series:");
     
    for(i=0; i<term; i++ )

{printf("%lld" , t1);

    nextterm= t1+t2;
    t1=t2;
    t2=nextterm;
}
return 0;

}