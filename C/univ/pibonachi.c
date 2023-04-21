#include <stdio.h>
#include <math.h>

/*
 * Function Declare Region
 */
int pibonachi(int column);

/*
 * main Function Region
 */
int main() {
   int howMany = 1;

   printf("피보나치 수열을 구하기\n");
   printf("처음 시작은 1 1부터 시작\n");
   printf("표시할 항의 개수: ");
   scanf("%d", &howMany);

   pibonachi(howMany);
}

/*
 * Recursive Function Region
 */
int pibonachi(int column) {
   int tmp;

   for (int n = 2; n < k; n++ )
   {
      temp = b;
      b = a + b;
      a = temp;

   }
   
   printf("fn의 값은: %d", b);
}

int pibonachi2(int a, int b, int k)
{
   if (k == 1) {
   
      return 0;
   }
   else {
      printf("%d", b);
      pibonachi2(b, a + b, k--);
      
   }
   
}
