#include <stdio.h>

    int main()
    {
        int a[10][10], row, col, i, j,sum;

        printf("enter number of row and columns:");
                scanf("%d%d", &row, &col);

                printf("enter matrix elements:\n");
                for(i=0; i<row; i++){
                        for(j=0; j<col; j++){
                            scanf("%d", &a[i][j]);
                        }
                    }
                    printf("row-wise sums are:\n");
                    for(i=0; i<row; i++){
                        sum=0;
                        for(j=0; j<col; j++){
                            sum+=a[i][j];
                        }
                        printf("sum of row %d=%d\n", i+1, sum);

                    }
                    return 0;
                }
    

