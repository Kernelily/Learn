/*
 * =====================================================================================
 *
 *       Filename:  schex3.c
 *
 *    Description:  Learn about libraries 
 *
 *        Version:  1.0
 *        Created:  03/27/23 05:41:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (Kernelily), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#define PI 3.141592

/*
 * Declare Function
 */

void ex3_2(void);
void ex3_4(void);
void ex3_5(void);
void ex3_6(void);
void ex3_7(void);
void ex3_9(void);
void ex3_10(void);
void ex3_11(void);

void testSum();
void moRaeSeeGae();
int testForLoop();
int elseIf();
int checkRange();
int yoonYearCheck();

/*
 * Main Function
 */

int main(void) {
    testSum();
    testSum();

    return 0;
}

/*
 * Actual Function Declare
 */

void testSum() {
    static int a = 10;
    int b = 20;

    a++; b++;
    printf("a = %d, b = %d\n", a, b);
}

void ex3_2() {
    char c = 'A';

    printf("%s 95%%\n", "C language");
    printf("%c의 코드 : %d, %o, %x\n", c, c, c, c);
    
    float f = 123.456;
    printf("%f\n", f);
}

void ex3_4() {
    char c = 'A';
    printf("%c%c%c%c\n", c, c, c, c);
    printf("%6c%6c%6c%6c\n", c, c, c, c);

    int a = 123;
    printf("|%d|%5d|%-5d|\n", a, a, a);

    printf("%d %d\n", 1, 1);
    printf("%d %d\n", 12, 12);
    printf("%d %d\n\n", 123, 123);

    printf("%5d %5d\n", 1, 1);
    printf("%5d %5d\n", 12, 12);
    printf("%5d %5d\n", 123, 123);
}

void ex3_5() {
    int a;
    float f;

    scanf("%d %f\n", &a, &f);
    printf("%d %f\n", a, f);
}

void ex3_6() {
    int month, date, height;
    double weight;

    printf("월/ 일 ==> ");
    scanf("%d / %d", &month, &date);
    printf("몸무게, 키 ==> ");
    scanf("%lf, %d", &weight, &height);

    printf("측정일 : %d월 %d일, 몸무게 %fkg, 키 %dcm\n", 
            month, date, weight, height);
}

void ex3_7() {
    int c;

    c = getchar(); // 한 글자만 읽음.
    putchar(c);

    c = getchar(); // 한 글자만 읽음.
    putchar(c);
}

void ex3_9() {
    double a, b, c, alpha;

    printf("b, c, alpha 형식으로 입력해라 ==> ");
    scanf("%lf, %lf, %lf", &b, &c, &alpha);
    a = sqrt(b * b + c * c - 2 * b * c * cos(alpha * PI / 180.0));

    printf("a = %lf\n", a);
}

void ex3_10() {
    srand((unsigned int)time(NULL));

    int a = rand(), b = rand(), c = rand();
    int h = rand() % 100 + 1, j = rand() % 100 + 1, l = rand() % 100 + 1;
    double x = (double) rand() / ((long) RAND_MAX + 1),
           y = (double) rand() / ((long) RAND_MAX + 1),
           z = (double) rand() / ((long) RAND_MAX + 1);
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("h = %d, j = %d, l = %d\n", h, j, l);
    printf("x = %g, y = %g, z = %g\n", x, y, z);
}

void ex3_11() {
    int a, b, c;

    printf("a + b + c의 형식으로 입력해라 ==> ");
    scanf("%d + %d + %d", &a, &b, &c);
    printf("Sum is %d\n", a + b + c);
}

void moRaeSeeGae() {
    int start, end;

   //  printf("start, end 형식으로 입력해라 ==> ");
   // scanf("%d, %d", &start, &end);
    
    int i, j;

	for(i=1;i<=4;i++){
		for(j=2;j<=i;j++){
			printf(" ");
		}
		for(j=9;j>=i*2-1;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++){
		for(j=4;j>=i;j--){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
}

int yoonYearCheck() {
    int year, isLeap;

    printf("Year? ==> ");
    scanf("%d", &year);

    isLeap = (year % 4 == 0) && (year % 100 !=0) || (year % 400 == 0);
    if (isLeap) {
        printf("%d년은 윤년이야.\n", year);
    } else {
        printf("응 %d년은 윤년이 아니야~\n", year);
    }

    return 0;
}

int checkRange() {
    int number;

    printf("정수를 입력해라 ==> ");
    scanf("%d", &number);

    if (number >= 80 && number < 90) 
        printf("입력은 80이상 90미만이다.");
    
    return 0; 
}

int elseIf() {
    int score;
    char grade;

    printf("점수 입력 ==> ");
    scanf("%d", &score);

    if (score >= 90) 
        grade = 'A';
    else if (score >= 80) 
        grade = 'B';
    else if (score >= 70) 
        grade = 'C';
    else if (score >= 60) 
        grade = 'D';
    else
        grade = 'F';

    printf("등급 : %c\n", grade);

    return 0;
}

int calCircleS() {
    float r;

    printf("원의 반지름 ==> ");
    scanf("%f", &r);

    while (r >= 0) {
        printf("반지름 = %f, 넓이 = %f\n", r, r * r * PI);
        scanf("%f", &r);
    }

    return 0;
}

int floatFbs() {
    int n; float r, prod = 1.0;

    printf("거듭제곱할 실수 ==> "); 
    scanf("%f", &r);

    printf("거듭제곱 횟수 ==> ");
    scanf("%d", &n);

    while (n > 0) {
        prod *= r;
        n -= 1;
    }

    printf("결과 = %f\n", prod);

    return 0;
}

int testForLoop() {
    // Syntax of "For Loop"
    // for (init; cond; renew) {}
    int sum = 0, N;

    printf("1~N까지의 합이라 할 때의 N의 값을 입력 ==> ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}

int incTest() {
    int init = 1, incr = 1, sum = 0;

    for (int i = 1; i < 20; i++) {
        printf("%4d\n", init);

        sum += init;
        init += incr;
        incr++;
    }

    return 0;
}
