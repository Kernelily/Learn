/*
 * =====================================================================================
 *
 *       Filename:  dount.c
 *
 *    Description:  Rotating Dount
 *
 *        Version:  1.0
 *        Created:  04/16/23 10:31:25
 *       Compiler:  gcc
 *
 *         Author:  정재윤 (@__77.4_), 
 *   Organization:  YONSEI UNIVERSITY
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int k;
    char b[1760];
    float A = 0, B = 0, i, j, z[1760];

    printf("\x1b[2J");

    for( ; ; ) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);

        for(j = 0; 6.28 > j; j += 0.07) {
            for(i = 0; 6.28 > i; i += 0.02) {
                float sini = sin(i),
                      cosj = cos(j),
                      sinA = sin(A),
                      sinj = sin(j),
                      cosA = cos(A),
                      cosi = cos(i),
                      cosB = cos(B),
                      sinB = sin(B),
                      cosj2 = cosj + 2,
                      mess = 1 / (sini * cosj2 * sinA + sinj * cosA + 5),
                      t = sini * cosj2 * cosA - sinj * sinA;
                
                int x = 40 + 30 * mess * (cosi * cosj2 * sinB - t * sinB),
                    y = 12 + 15 * mess * (cosi * cosj2 * sinB + t * cosB),
                    o = x + 80 * y,
                    N = 8 * ((sinj * sinA - sini * cosj * cosA) \
                            * cosB -sini * cosj * sinA - sinj * cosA - cosi * cosj * sinB);

                if (y < 22 && y > 0 && x > 0 && x < 80 && mess > z[o]) {
                    z[o] = mess;
                    b[o] = ".,-~:;=!*#$@"[N>0?N:0];
                }
            }
        }
        
        system("clear");

        for(k = 0; k < 1761; k++)
            putchar(k % 80 ? b[k] : 10);
        
        A += 0.08;
        B += 0.02;
    }

    return 0;
}

