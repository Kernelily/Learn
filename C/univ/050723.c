#include <stdio.h>

int main() {
    int howMany = 0, maxArray[5], minArray[5];

    // 배열 초기화
    for (int i = 0; i < 5; i++) { 
        maxArray[i] = 0; minArray[i] = 0;
    }

    printf("배열 크기 입력: "); scanf("%d", &howMany);
    if (howMany > 20 || howMany < 1 ) {
        printf("배열 크기는 15 이하로 입력해주세요.\n");
        return 0;
    }

    // 입력 받은 배열 크기 만큼 배열 생성
    int array[howMany];
    printf("배열 요소 입력: ");
    for (int i = 0; i < howMany; i++) {
        scanf("%d", &array[i]);
        if (array[i] < 0 || array[i] > 100) {
            printf("범위를 벗어나서 입력할 수 없습니다.\n");
            return 0;
        }
    }

    // 역순 출력
    printf("역순: ");
    for (int i = howMany - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 최대값, 최소값 by 3
    int splitSize = 3;

    // 배열을 인덱스 원소가 3개인 인덱스로 나누어서 최대값, 최소값 구하기
    { 
        for (int i = 0, x = 0; i < howMany; i += splitSize, x++) {
            for (int k = splitSize * x; k < howMany; k++) {
                for (int j = k + 1; j < splitSize * (x + 1); j++) {
                    if (array[k] > array[j]) {
                        int temp = array[k];
                        array[k] = array[j];
                        array[j] = temp;
                    }
                }
            }
            maxArray[x] = array[splitSize * (x + 1) - 1];
        }
    }

    { 
        for (int i = 0, x = 0; i < howMany; i += splitSize, x++) {
            for (int k = splitSize * x; k < howMany; k++) {
                for (int j = k + 1; j < splitSize * (x + 1); j++) {
                    if (array[k] < array[j]) {
                        int temp = array[j];
                        array[j] = array[k];
                        array[k] = temp;
                    }
                }
            }
            minArray[x] = array[splitSize * (x + 1) - 1];
        }
    }

    // 최대값, 최소값 출력
    for (int i = 0; i < 5; i++) {
        if (maxArray[i] == 0) continue;
        printf("%d ", maxArray[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        if (minArray[i] == 0) continue;
        printf("%d ", minArray[i]);
    }
    printf("\n");

    return 0;
}
