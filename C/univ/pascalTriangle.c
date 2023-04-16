/*
 * =====================================================================================
 *
 *       Filename:  pascalTriangle.c
 *
 *    Description:  Let's Generate Pascal's Triangle Using C Lang!
 *
 *        Version:  1.0
 *        Created:  02/13/23 13:02:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kernelily 
 *   Organization:  DELTA Corp.
 *
 * =====================================================================================
 */
#include <stdio.h>

int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}
