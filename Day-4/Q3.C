#include <stdio.h>
#include <math.h>
 int main()
 {
    int value, tempvalue, digit,count=0;
    int armstrongsum=0;

    printf("enter a number:");
    scanf("%d",&value);

    tempvalue= value;

    while(tempvalue!=0)
    {
        count++;
        tempvalue/=10;
    }
    tempvalue=value;

    while(tempvalue!=0)
    {
        digit=tempvalue%10;
        armstrongsum+=pow(digit,count);
         tempvalue/=10;

    }
    if (armstrongsum== value)
    printf("%d is an armstrong number", value);
    else
    printf("%d is not an armstrong number",value);

    return 0;
 }
