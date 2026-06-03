#include <stdio.h>

int main()
{
    int initial,ending ,i,j,prime;
    
    printf("enter the initial number:");
    scanf("%d", &initial);

    printf("enter the ending point:");
    scanf("%d",&ending);

    printf("prime numbers between %d and %d are:\n", initial,ending);

    for (i=initial; i<=ending; i++)

    if(i<=1)
    continue;
    
    prime=1;

    for( j=2; j<=i/2; j++)
    {
        if (i%j==0)
        {
            prime=0;
            break;
        }
        
        }
        if (prime==1)
        {
            printf("%d",i);

        }
        printf("\n");
        return 0;

    }




