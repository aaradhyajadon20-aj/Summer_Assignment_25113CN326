#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("enter order of square of matrix:");
    scanf("%d", &n);
     
    int a[n][n];

    printf("enter matrix elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        sum+=a[i][i];
    }
    printf("diagonal sum=%d", sum);

    return 0;
}