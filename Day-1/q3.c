#include <stdio.h>
int main() {
   int n, i;
   unsigned long long factorial = 1; // To handle large results
   printf("Enter an integer: ");
   scanf("%d", &n);
   if (n < 0) {
       printf("Error! Factorial of a negative number doesn't exist.\n");
   } else {
       for (i = 1; i <= n; ++i) {
           factorial *= i; // Multiply each number from 1 to n
       }
       printf("Factorial of %d = %llu\n", n, factorial);
   }
   return 0;
}