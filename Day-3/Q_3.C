#include <stdio.h>

int main()

{
    int n1,n2, temp;

    printf("enter two positive number:");
    scanf(" %d %d", &n1,&n2);

    int N1= n1;
    int N2=n2;

    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1= temp;
    }

    printf("the gcd of %d and %d is:%d\n", N1,N2,n1);
    
    return 0;

}
