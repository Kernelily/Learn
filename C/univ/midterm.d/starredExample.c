#include <stdio.h>
#include <stdlib.h>

/*
 * Function Declare Region
 */
int E217(); int E218(); int E34();
int E310(); int E435();

// more

/*
 * Main Function Region
 */
int main() {
    int funcNum;

    printf("Enter Function Number => ");
    scanf("%d", &funcNum);

    switch (funcNum) {
        case 217: E217(); break;
        case 218 : E218(); break;
        case 34 : E34(); break;
        case 310 : E310(); break;
        case 435 : E435(); break;
        default : return main(); break;
    }

    return 0;
}

/*
 * Acutal Function Region
 */
int E217() {
    // 증감 연산자와 복합할당 연산자를 포함한 프로그램
    int aValue = 10, bValue;

    aValue++;
    printf("%d\t%d\t%d\t%d\n", aValue, ++aValue, aValue--, aValue);

    bValue = ++aValue * 10;
    printf("aValue = %d, bValue = %d\n", aValue, bValue);

    aValue += 10; // aValue = aVaule + 10;
    printf("aValue += 10 ==> %d\n", aValue);

    return 0;
}

int E218() {
    // 증감 연산자를 두 번 사용하는 프로그램
    int a = 5, b = a++ * 10 + a++; // 사후, 사후 증가
    printf("후후 = %d\n", b);

    a = 5, b = a++ * 10 + ++a; // 사후, 사전 증가
    printf("후전 = %d\n", b);

    a = 5, b = ++a * 10 + ++a; // 사전, 사전 증가
    printf("전전 = %d\n", b);
    
    return 0;
}

int E34() {
    // 폭을 지정하여 세로 정렬로 자료를 출력하는 printf문

    // 필드 폭 미지정
    printf("%d %d\n", 1, 1);
    printf("%d %d\n", 12, 12);
    printf("%d %d\n", 123, 123);
   
    // 필드 폭 지정
    printf("%5d %5d", 1, 1);
    printf("%5d %5d", 12, 12);
    printf("%5d %5d", 123, 123);

    return 0;
}

int E310() {
    // 난수 생성 함수를 사용하는 프로그램
    // #include <stdlib.h>

    int a = rand(), b = rand(), c = rand();
    double x = (double) rand() / ((long) RAND_MAX + 1), \
           y = (double) rand() / ((long) RAND_MAX + 1), \
           z = (double) rand() / ((long) RAND_MAX + 1);

    // 0과 RAND_MAX 사이의 난수 생성
    printf("%d\t%d\t%d\n", a, b, c); 

    // 1과 100 사이의 난수 생성
    a = 1 + rand() % 100;
    b = 1 + rand() % 100;
    c = 1 + rand() % 100;
    printf("%d\t%d\t%d\n", a, b, c);

    // 0과 1사이의 실수 난수 생성
    printf("%g\t%g\t%g\n", x, y, z);

    return 0;
}

int E435() {
    // 두 개의 반복 제어 변수를 사용하는 for 반복문 (콤마 연산자 사용)
    int i, j;

    for(i = 0, j = 0; i + j <= 30; i++, j += 2) 
        printf("(%d, %d)\n", i, j);

    return 0;
}
