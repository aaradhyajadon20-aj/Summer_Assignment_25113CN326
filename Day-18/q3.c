#include <stdio.h>

int main(){
    int arr[100],n,key,low,high,mid,found=0;

    printf("enter the number of elements:");
    scanf("%d", &n);

    printf("enter the elements in sorted order:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

printf("enter the elements to search:");
scanf("%d", &key);

low=0;
high=n-1;

while(low<=high){
    mid=(low+high)/2;

    if(arr[mid]==key){
        found=1;
        printf("elements found at position%d\n", mid+1);
        break;
    }
    else if(arr[mid]<key){
        low=mid++;
    }
    else{
        high=mid-1;
    }
}
if(!found)
{
    printf("elements not found:");
}
return 0; 
}