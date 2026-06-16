#include <stdio.h>

int main()
{
    int arr[]={1,2,2,3,4,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxfreq=0 , maxelement;

    for(int i=0; i<n; i++)
    {
        int count=1;
        for(int j=i+1; j<n;j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    printf("maximum frequency element=%d\n", maxelement);
    printf("frequency=%d\n", maxfreq);

    return 0;
}