#include <stdio.h>
int main()
{
    int arr[]={65,24,25,45,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i, j, index,temp;

    for(i=0; i<n-1; i++){
        index=i;

        for(j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    printf("sorted array:");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;

}