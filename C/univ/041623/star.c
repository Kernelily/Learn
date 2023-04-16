/*
 * =====================================================================================
 *
 *       Filename:  star.c
 *
 *    Description:  별 찍어조지는 프로그램 
 *
 *        Version:  1.0
 *        Created:  04/16/23 14:20:45
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY 
 *
 * =====================================================================================
 */
#include <stdio.h>

int main() {
    int howMany = 0;

    printf("몇번 찍어? => ");
    scanf("%d", &howMany);
    
    for (int i = 1; i <= howMany; i++) {
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
