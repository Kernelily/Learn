#include<stdio.h>
int main() {
    int num, n = 0;
    int a[100][100]; //max용 배열
    int b[100][100]; //min용 배열
    int c[100][100];

    scanf("%d", &num);  // 숫자를 입력받는다.
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[0][i]); //a[100][100]인 2차원배열에 0부터num-1번째 전까지 숫자를 받는다.
    }

    printf("역순: ");
    for (int i = num - 1; i >= 0; i--) {
        printf("%d ", a[0][i]);      //역순은 그대로 num-1부터 0까지 출력
    }
    
    printf("\n");

    int m = num;
    int i, j = 0;
    for (i = 0; i < 100; i++) {
      for (j = 0; j < m; j += 3) {  //순서가 a[i][j]에서 j가 0 3 6 9 이렇게 3씩 증가한다.
         if (a[i][j] != 0 && a[i][j + 1] == 0 && a[i][j + 2] == 0) {
            a[i + 1][n] = a[i][j];
            n++;
         }
         else if (a[i][j] != 0 && a[i][j + 1] != 0 && a[i][j + 2] != 0) {
            int max = a[i][j];

            for (int z = j; z < j + 3; z++) {
               if (max <= a[i][z]) {
                  max = a[i][z];
               }


            }
            a[i + 1][n] = max;
            n++;


         }
         else if (a[i][j] != 0 && a[i][j + 1] != 0 && a[i][j + 2] == 0) {
            if (a[i][j] >= a[i][j + 1]) {
               a[i + 1][n] = a[i][j];
               n++; // 뒤에 있는 수가 클경우 
            }
            else if (a[i][j + 1] >= a[i][j]) {
               a[i + 1][n] = a[i][j + 1];
               n++; // 앞에 있는 수가 클 경우
            }
         }
         if (i == 0) {
            if (a[i][j] != 0 && a[i][j + 1] == 0 && a[i][j + 2] == 0) {
               b[i + 1][n] = a[i][j];
               n++;
            }
            else if (a[i][j] != 0 && a[i][j + 1] != 0 && a[i][j + 2] != 0) {
               int min = a[i][j];
               for (int z = j; z < j + 3; z++) {

                  if (min >= a[i][z]) {
                     min = a[i][z];
                  }

               }
               b[i + 1][n] = min;
               n++;

            }
            else if (a[i][j] != 0 && a[i][j + 1] != 0 && a[i][j + 2] == 0) {
               if (a[i][j] >= a[i][j + 1]) {
                  b[i + 1][n] = a[i][j + 1];
                  n++; // 뒤에 있는 수가 클경우 
               }
               else if (a[i][j + 1] >= a[i][j]) {
                  b[i + 1][n] = a[i][j];
                  n++; // 앞에 있는 수가 클 경우
               }
            }
         }
         else {
            if (b[i][j] != 0 && b[i][j + 1] == 0 && b[i][j + 2] == 0) {
               c[i + 1][n] = b[i][j];
               n++;
            }
            else if (b[i][j] != 0 && b[i][j + 1] != 0 && b[i][j + 2] != 0) {
               int min = b[i][j];
               for (int z = j; z < j + 3; z++) {

                  if (min >= b[i][z]) {
                     min = b[i][z];
                  }

               }
               c[i + 1][n] = min;
               n++;


            }
            else if (b[i][j] != 0 && b[i][j + 1] != 0 && b[i][j + 2] == 0) {
               if (b[i][j] >= b[i][j + 1]) {
                  c[i + 1][n] = b[i][j + 1];
                  n++; // 뒤에 있는 수가 클경우 
               }
               else if (b[i][j + 1] >= b[i][j]) {
                  c[i + 1][n] = b[i][j];
                  n++; // 앞에 있는 수가 클 경우
               }
            }
         }
      }

      for (int j = 0; j < n; j++) {
          if (a[i+1][j] == 0) continue;
         printf("%d ", a[i + 1][j]);
      } // i가 커지기 전에 미리 i+1에 있는 배열을 for문을 통해 출력한다.

      if (i == 0) {
         for (int j = 0; j < n; j++) {
          if (b[i+1][j] == 0) continue;
            printf("%d ", b[i + 1][j]);
         }
      }
      else {
         for (int j = 0; j < n; j++) {
            if (c[i+1][j] == 0) continue;
            printf("%d ", c[i + 1][j]);
         }
      }
      m = n;
      // n이 1인 경우는 배열에 숫자가 하나만 있는 경우  즉 제일 큰 수가 출력된 경우이므로 이때 for문을 끝낸다.
      if (n == 2) {
         break;
      }
      n = 0;
   }

   return 0;
}
