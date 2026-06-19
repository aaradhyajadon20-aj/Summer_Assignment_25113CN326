#include <stdio.h>

int main()

{
int r, c;

printf("enter number of rows and columns");

scanf("%d%d" ,&r, &c);

int a[r][c], b[r][c], diff[r][c];

printf("enetr the element of first matrix:\n");

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        scanf("%d", &a[i][j]);
    }
}
printf("enter element of second matrix:\n");

for (int i=0; i<r; i++)
{
    for (int j=0; j<c; j++){
        scanf("%d", &b[i][j]);
    }
}

for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        diff[i][j]=a[i][j]-b[i][j];
    }
}
printf("difference of the matrix:\n");
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        printf("%d", diff[i][j]);
    }
    printf("\n");
}
return 0;

}