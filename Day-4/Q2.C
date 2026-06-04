#include <stdio.h>
 int main()
 {

    int n,i;

    long long t1=0,t2=1,next;

    printf("enter the value of n:");
    scanf("%d", &n);

    if(n==1)
    {
        printf("the %dst fibonacci term is %lld", n,t1);
    }

    else if (n==2)
    {
        printf("the %dnd fibnocci term is %lld", n,t2);
}
else{
    for (i=3;i<=n; i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    printf("the %dth fibnocci term is %lld",n,t2);
}
 return 0;
 }