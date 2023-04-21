/*
 * =====================================================================================
 *
 *       Filename:  forLO.c
 *
 *    Description:  Requested Question 
 *
 *        Version:  1.0
 *        Created:  04/15/23 19:56:34
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>

/*
 * 함수 선언 리전
 */
void stamp(int curr_island, int n);
void stamp2(int curr_island, int n);
void stamp3(int curr_island, int n);

/* 
 * 메인함수 리전
 */
int main() {
    int n;
    
    printf("숫자 입력 ==> ");
    scanf("%d", &n);

    printf("* 문제 1\n");
    stamp(1, n);
    printf("\n");

    printf("* 문제 2\n");
    stamp2(1, n);
    printf("\n");

    printf("* 문제 3\n");
    stamp3(1, n);
    printf("\n");

    return 0;
}

/*
 * 함수 리전
 */
// 문제 3-1번 함수
void stamp(int curr_island, int n) {
    if (curr_island > n) return; // n보다 크면 종료

    printf("벽력%d섬 방문\n", curr_island);

    int next_island = 2 * curr_island;
    stamp(next_island, n); // 재귀 함수 호출

    next_island = 2 * curr_island + 1;
    stamp(next_island, n); // 재귀 함수 호출
}

// 문제 3-2번 함수
void stamp2(int curr_island, int n) {
    if (curr_island > n) return;

    int next_island = 2 * curr_island;
    stamp2(next_island, n);

    printf("벽력%d섬 방문\n", curr_island);

    next_island = 2 * curr_island + 1;
    stamp2(next_island, n);
}

// 문제 3-3번 함수
void stamp3(int curr_island, int n) {
    if (curr_island > n) return;

    int next_island = 2 * curr_island;
    stamp3(next_island, n);

    next_island = 2 * curr_island + 1;
    stamp3(next_island, n);

    printf("벽력%d섬 방문\n", curr_island);
}
