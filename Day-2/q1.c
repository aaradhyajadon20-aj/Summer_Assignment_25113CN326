#include <stdio.h>
int main() {
   int num, sum = 0;
   // Input a number from the user
   printf("Enter a number: ");
   scanf("%d", &num);
   // Loop to calculate the sum of digits
   while (num != 0) {
       sum += num % 10; // Add the last digit to sum
       num /= 10; // Remove the last digit
   }
   printf("Sum of digits = %d\n", sum);
   return 0;
}