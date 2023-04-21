/*
 * =====================================================================================
 *
 *       Filename:  hanoi.c
 *
 *    Description:  하노이탑 재귀함수 사용 
 *
 *        Version:  1.0
 *        Created:  04/17/23 14:12:46
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>

/*
 * Function declare
 */
int sum(int n);
void hanoi(int n, char a, char b, char c);

/*
 * main function region
 */
int main() {
    printf("sum(3) = %d\nsum(1) = %d\nsum(-1) = %d\n", sum(3), sum(1), sum(-1));
    printf("\n");

    int discNum;
    
    printf("discNum ==> ");
    scanf("%d", &discNum);

    hanoi(discNum, 'A', 'B', 'C'); // Disc Count, Notation * 3

    return 0;
}

/*
 * Function region
 */
int sum(int n) {
    if (n == 1) return 1;
    else if (n > 1) return sum(n - 1) + n;
    else return 0;
}

void hanoi(int n, char a, char b, char c) {
    if (n < 1) printf("Invalid number of dicss\n");
    else if (n == 1) printf("원반 %d : %c ==> %c\n", n, a, c);
    else {
        hanoi(n - 1, a, c, b);
        printf("원반 %d : %c ==> %c\n", n, a, c);
        hanoi(n - 1, b, a, c);
    }
}
