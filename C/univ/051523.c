#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int catStr(); int cmpStr();
int fbuAtoi(char str[]);
double mulStr(char numA[], char numB[]);
int simpleDict(); int structIntro();

int main() {
/*    
    printf("Function By Library\n");
    printf("%d\t", atoi("12345"));
    printf("%d\t", atoi("12abc"));
    printf("%d\n", atoi("abc"));

    printf("Function By User\n");
    printf("%d\t", fbuAtoi("12345"));
    printf("%d\t", fbuAtoi("12abc"));
    printf("%d\n", fbuAtoi("abc"));

    printf("%.2f\n", mulStr("129.41", "25.83"));

    simpleDict();
*/

    structIntro();

    return 0;
}

int catStr() {
    char last[] = "Richie ";
    char first[] = "Dennis ";
    char year[] = "1941-2011";
    char info[100];

    strcpy(info, first);
    strcat(info, last);
    strcat(info, year);

    printf("%s\n", info);

    return 0;
}

int cmpStr() {
    char str1[81], str2[81];
    int result;

    printf("두 단어 입력: ");
    scanf("%s %s", str1, str2);

    result = strcmp(str1, str2);
    if (result < 0) {
        printf("%s가 %s보다 앞에 있음\n", str1, str2);
    } else if (result == 0) {
        printf("%s와 %s가 같음\n", str1, str2);
    } else {
        printf("%s가 %s보다 뒤에 있음\n", str1, str2);
    }

    result = strncmp(str1, str2, 3);
    printf("글자 비교: %d\n", result);

    return 0;
}

int fbuAtoi(char str[]) {
    int number = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') break;
        number = number * 10 + (str[i] - '0');
    }

    return number;
}

double mulStr(char numA[], char numB[]) {
    char result[100];
    double x, y;

    sscanf(numA, "%lf", &x);
    sscanf(numB, "%lf", &y);

    return x * y;
}

// EX7.13
char words[][3][40] = {
    "dog", "Hund", "개",
    "no", "nein", "아니오",
    "yes", "ja", "예",
    "child", "Kind", "아이",
    "I", "Ich", "나",
    "you", "dich", "너",
    "house", "Haus", "집",
    "love", "Liebe", "사랑",
    "", "", ""
};

int simpleDict() {
    char english[80];
    int i = 0;

    printf("영어 단어를 입력하시오: ");
    scanf("%s", english);

    while (strcmp(words[i][0], "")) {
        if (!strcmp(english, words[i][0])) {
            printf("Eng: %s, Ger: %s, Kor: %s\n", words[i][0], words[i][1], words[i][2]);

            return 0;
        }

        i++;
    }

    printf("사전에 없음\n");

    return 1;
}

// 구조체 시작
struct dotPoint {
    double x, y;
};

int structIntro() {
    struct dotPoint A, B;
    double dx, dy, distance;

    printf("첫 번째 점의 좌표: ");
    scanf("%lf, %lf", &A.x, &A.y);

    printf("두 번째 점의 좌표: ");
    scanf("%lf, %lf", &B.x, &B.y);

    dx = A.x - B.x; dy = A.y - B.y;
    distance = sqrt(dx * dx + dy * dy);

    printf("두 점 사이의 거리: %.2f\n", distance);

    return 0;
}
