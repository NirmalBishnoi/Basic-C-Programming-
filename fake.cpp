#include <stdio.h>
int main() {
   int i=1, a, col;
   for (col = 10; col >= i; col--) {
      for (a = 1; a <= col; a++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

