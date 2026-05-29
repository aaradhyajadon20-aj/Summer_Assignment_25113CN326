#include <stdio.h>
int main() {
   long long num;
   int count = 0;
   printf("Enter an integer: ");
   scanf("%lld", &num);
   // Handle zero explicitly
   if (num == 0) {
       count = 1;
   } else {
       // Remove last digit repeatedly
       while (num != 0) {
           num /= 10;
           ++count;
       }
   }
   printf("Number of digits: %d\n", count);
   return 0;
}