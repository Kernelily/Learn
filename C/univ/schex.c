/*
 * =====================================================================================
 *
 *       Filename:  Output.c
 *
 *    Description:  Test Output Program 
 *
 *        Version:  1.0
 *        Created:  03/13/23 05:25:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (Kernel), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <limits.h> // INT_MAX 명령어 사용을 위해 필요한 라이브러리
#include <float.h> // FLT_MIN_10_EXP 명령어 사용을 위해 필요한 라이브러리
#define pi 3.141592

int tscan();
int cver();

int tscan() {
    float r, s, v;
    
    printf("원의 널이를 구해드림!\n");
    printf("반지름 ==> ");
    scanf("%f", &r);

    s = pi * r * r;
    
    printf("\n넓이 ==> %f\n", s);
    printf("둘레 ==> %f\n", 2 * pi * r);
    printf("부피 ==> %f\n", 4 / 3 * pi * r * r * r);
    return 0;
}

int cver() {
    printf("__STDC_VERSION__ = %ld\n", __STDC_VERSION__);
    return 0;
}

int ds() {
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char),        // 1
        sizeof(short),       // 2
        sizeof(int),         // 4
        sizeof(long),        // 4
        sizeof(long long)    // 8
    );

    return 0;
}

int strangef() {
    printf("INT_MAX = %d\n", INT_MAX);
    printf("FLT_MAX_10_EXP = %d\n", FLT_MAX_10_EXP);
    printf("FLT_MIN_10_EXP = %d\n", FLT_MIN_10_EXP);
    printf("FLT_DIG = %d\n", FLT_DIG);

    return 0;
}

int func1() {
    printf("%d\t %d\t %d\t %f\t %f\n",
            15,
            017,
            0xf,
            0.034,
            3.4e-2
            );

    // \101\x42
    return 0;
}

int ex2_10() {
    float scale = 1.609, mile = 85000.0;
    printf("km = %f\n", scale * mile);

    return 0;
}

int ex2_11() {
    int a = 8, b = 20, t; // t는 임시변수
    a = a + 2;

    printf("BEFORE : a = %d, b = %d\n", a, b);

    t = a; a = b; b = t;
    printf("AFTER : a = %d, b = %d\n", a, b);
    
    return 0;
}

int ex2_13() {
    float f, c;

    printf("TYPE f ==> ");
    scanf("%f", &f);

    c = 5.0 / 9.0 * (f - 32.0);
    printf("F => C, C = %f\n", c);

    return 0;
}

int ex2_14() {
    int a = 10, b = 15, c;
    float x = 10.0, y = 30.0, z;

    printf("%f\t %d\t %d\t %f\n",
            5.0 / 9.0 * 9.0,
            5 / 9 * 5,
            (2 * b - a) / 3,
            (x + 3.0) / (y - 5.0)
            );
    
    return 0;
}

int ex2_15() {
    double d;
    float f;
    int a;
    short b;

    d = 12356.789012;
    f = d;
    a = f;
    b = a;

    printf("d= %f\t f = %f\t a = %d\t b = %d\n", d, f, a, b);

    return 0;
}

int ex2_151() {
    double d0, d1;
    int num = 30, den = 8;

    d0 = num / den;
    d1 = (double)num / den;
    
    printf("d0 = %f\td1 = %f\n", d0, d1);
    return 0;
}

int ex2_18() {
    int a, b, c, d, e;
    a = 0x8C67;

    b = a | 0x00F0;
    c = a ^  0x000F;
    d = a & 0x0F00;
    e = a & ~0x0F00;

    printf("%x\t%x\t%x\t%x\n", b, c, d, e);

    return 0;
}

int ex2_20() {
    int a, b;
    
    a = 0x39; // %x는 16진수로 나타낸 값을 의미한다.
    printf("%d\t%d\t%d\t%d\n", a, a >> 2, a << 3, (a << 2) + a);

    b = (a & 0xF0) >> 4;
    printf("b >> 4 = %x\t", b);

    b = 1 << 31; // 최상위 비트(31번)가 1이고 나머지 0인 정수
    printf("1 << 31 = %x\n", b);

    a = 0x8000C000;
    printf("%x\t%x\n", a >> 2, (unsigned)a >> 2);
    // signed에서는 앞 비트를 1로 채운다.
    // unsigned에서는 앞 비트를 0으로 채운다.
    // result 0xE0003000 / 0x20003000

    return 0;
}

int main(void) {
//  printf("ABCDE\n12345\nabcde\n");
//  tscan();
//  ds();
//  func1();
//  strangef();
    ex2_20();

    return 0;
}
