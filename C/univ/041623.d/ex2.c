/*
 * =====================================================================================
 *
 *       Filename:  ex2.c
 *
 *    Description:  Exercise 2 
 *
 *        Version:  1.0
 *        Created:  04/15/23 20:31:25
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>

/*
 * 변경사항
 *
 * 올바른 double-quote로 변경 ("") 
 * 불완전한 함수 -> 제가 완성했습니다.
 * 친절함 추가 ㅎ
 */

/*
 * 함수 선언 리전
 */
// 선언 잘하셨어요.
int give_friend(int length, int m);
int eat(int length, int m);

/*
 * 메인 함수 리전
 */
int main() {
    int n, m;

    // scanf만 있으면 살짝 차갑잖아요? ㅎ
    printf("길이 인원 입력 => ");
    scanf("%d %d", &n, &m);

    eat(n, m);

    return 0;
}

/*
 * 함수 리전
 */
int eat(int length, int m) { 
    if (length <= 0) return 0;
    
    int rest = length % m;
   
    if (rest == 0) {
        // 먹을수록 길이는 작아져요!
        length /= m;
         
        printf("먹은 사람 : 김연세, 먹은 후 남은 길이 : %d\n", length);

        return eat(length, m); // eat 재귀하고 종료
    } else {
        return give_friend(length, m); // give_friend 호출하고 종료
    }
}

int give_friend(int length, int m) {
    if (length == 0) return eat(length, m); // 재귀함수 탈출

    length--; // 1을 빼장...
    int rest = length % m;

    printf("먹은 사람 : %d번째 친구, 먹은 후 남은 길이 : %d\n", rest + 1, length);

    return eat(length, m);
}
