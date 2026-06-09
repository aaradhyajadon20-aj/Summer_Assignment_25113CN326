#include <stdio.h>

int main()
{
    int i,j,n=5;
    char ch;

for(i=1;i<=n;i++)
{
    ch='A'+i-1;

    for(j=1;j<=i;j++)
    {
        printf("%c",ch);
        
    }
    printf("\n");
}
return 0;
}
