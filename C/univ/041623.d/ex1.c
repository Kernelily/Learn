/*
 * =====================================================================================
 *
 *       Filename:  ex1.c
 *
 *    Description:  Excersise 1 
 *
 *        Version:  1.0
 *        Created:  04/16/23 12:35:31
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int recursive(int count);

int main() {
    char content[] = "어느 날 소프트웨어학부 학생이 내게 와서 물었다.\
        \n 조교님! 재귀 함수가 뭔가요?\
        \n 옛날에.. 호랑이 삶아지던 시절 어떤 똑똑한 조교가 살았더랬지.\
        \n 그 조교는 너무나 일처리가 빠르고 똑똑했지.\
        \n 학생들 뿐만 아니라 교수님들까지 모르는 것이 있으면 매일 같이\
        달려와 물어볼 정도였어.\
        \n 그러던 어느 날 한 학생이 찾아와서 물었네\
        \n";

    int howMany = 0;

    printf("재귀 횟수 입력 => ");
    scanf("%d", &howMany);

    system("clear"); // Linux = clear, Windows = cls
    printf("%s", content);

    recursive(howMany);

    return 0;
}

int recursive(int count) {
    char col1[] = "조교님! 재귀 함수가 뭔가요?\n ";
    char col2[] = "재귀 함수는 자기 자신을 호출하는 함수란다.\n ";
    char col3[] = "라고 말했어.";
    char dashSymbol = '-';

    if (count <= 0) {
        printf("%s\n", col3);

        return 0;
    } else {
        count--;
        
        printf(" %s%s%s\n", col1, col2, col3);

        return recursive(count);
    }
}
