#include <stdio.h>
// Function to calculate sum of first n natural numbers
int calculate_sum(int n) {
   int sum = 0;
   for (int i = 1; i <= n; i++) {
       sum += i;
   }
   return sum;
}
int main() {
   int n;
   // Input validation
   do {
       printf("Enter a positive integer: ");
       scanf("%d", &n);
       if (n <= 0) {
           printf("Invalid input. Please enter a positive integer.\n");
       }
   } while (n <= 0);
   // Call the function and display result
   int result = calculate_sum(n);
   printf("The sum of the first %d natural numbers is: %d\n", n, result);
   return 0;
}