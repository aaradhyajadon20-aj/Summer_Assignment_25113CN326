#include <stdio.h>
#include <math.h>

int main()
{
    int start,end,current,temp,digits,count;
    int armstrongtotal;

    printf("enter the starting number:");
    scanf("%d",&start);
     
    printf("enter the ending number:");
    scanf("%d",& end);
     printf("armstrong numbers between %d and %d are:\n",start,end);

     for( current= start; current<=end; current++)
     {
        temp= current;
        count=0;
        armstrongtotal=0;
         
        while(temp!=0)
        {
            count++;
            temp/=10;
        }
        temp= current;
        while (temp!=0)
        {
            digits= temp%10;
            armstrongtotal+= pow(digits,count);
            temp/=10;
        }
        if (armstrongtotal==current)
        {printf("%d",current);
        }
     }
     return 0;
}