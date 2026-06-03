#include <stdio.h>

int main()
 {

    int num ,i;
  unsigned long long factorial= 1;

    printf("Enter an  integer:");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        factorial *= i;
    }

    printf("factorial of %d = %lld\n",num,factorial);
    
    return 0;

 }