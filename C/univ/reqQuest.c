/*
 * =====================================================================================
 *
 *       Filename:  reqQuest.c
 *
 *    Description:  요청 받은 프로그램 
 *
 *        Version:  1.0
 *        Created:  03/30/23 04:48:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (Kernel), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Function declare
 */
int exone(void);
int extrd(void);
int exfor(void);

/*
 * main Function
 */
int main(void) {
    exfor();

    return 0;
}

/*
 * Actual Function
 */
int exfor() {
    int num = 0, total = 0;

    printf("~~~~~~\n");

    while (1) {
        printf("coffe count => ");
        scanf("%d", &num);
        
        if (num == 0)
            break;

        total += num;
    }

    printf("오늘의 ㅋ피 %d잔\n", total);

    return 0;
}

int exone() {
    int h, m, sum;

    printf("HH:MM형식으로 시간을 입력해라 => ");
    scanf("%02d:%02d", &h, &m);

    if (h > 23 || h < 0 || m < 0 || m > 59) {
        printf("넌 입력을 왜 그따구로 하니?\n");
        return 1;
    }

    sum = (h + m);
    
    if (h > 12 || h == 12) {
        if (sum % 7 == 0) {
            printf("[가능] 돌아갈 수 있따!\n");
        } else {
            printf("[불가] 못 돌아간다.\n");
        }
    } else if (h > 0 && h < 12) {
        if (sum % 3 == 0) {
            printf("[가능] 돌아갈 수 있따!\n");
        } else {
            printf("[불가] 못 돌아간다.\n");
        }
    } else {
        printf("출력될 수 없는 문장\n");
    }

    return 0;
}

int extrd() {
    int a1 = 0, a2 = 0, r = 0;
    char ro, wo;

    printf("a1 (+/-/*//) a2 = r의 형식으로 입력해라 => ");
    scanf("%d %c %d = %d", &a1, &wo, &a2, &r);

    if (a1 + a2 == r) {
        ro = '+';
    } else if (a1 - a2 == r) {
        ro = '-';
    } else if (a1 / a2 == r) {
        ro = '/';
    } else if (a1 * a2 == r) {
        ro = '*';
    } else {
        printf("사칙 연산으로는 절대 나올 수가 없는 값..?\n");
        return 1;
    }

    if (ro == wo) {
        printf("문제 없는데 왜 굳이 확인해?\n");
        return 0;
    }

    printf("XXXX끼야, %c가 아니라 %c겠지!\n", wo, ro);

    return 0;
}

int seeBal() {
    int n = 0, m = 0;

    printf("n, m 형식으로 입력해라 => ");
    scanf("%d, %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }

        for (int j = 0; j < i + m + 1; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
