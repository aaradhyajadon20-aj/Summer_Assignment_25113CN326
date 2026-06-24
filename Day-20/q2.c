#include <stdio.h>

int main()
{
    int n,i,j,symmetric=1;
    int a[10][10];

    printf("enter the elements of the matrix :");
    scanf("%d", &n);

    printf("enter the elements of the matrix:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j]!=a[j][i]){
                symmetric =0;
                break;
            }
        }
    }
    if(symmetric)
    printf("matrix is symmetric.");
    else
    printf("matrix is not symmetric.");
     
    return 0;
}