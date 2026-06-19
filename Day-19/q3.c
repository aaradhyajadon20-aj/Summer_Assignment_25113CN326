#include <stdio.h>

int main()
{
    int r, c;

    printf("enter number of rows and column:");
    
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("enter matrix element:\n");
    for( int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("transpose of the matrix:\n");
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}