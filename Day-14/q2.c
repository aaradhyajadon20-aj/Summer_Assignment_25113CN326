#include <stdio.h>

int main()
{
    int arr[100], n, key, i, count=0;

    printf("enter the number of elemts:");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the elements to find frequency:");
    scanf("%d", &key);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            count++;
        }
    }
    printf("frequency of %d= %d\n",key,count);

    return 0;
}