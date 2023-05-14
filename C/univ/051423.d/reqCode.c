#include <stdio.h>

int main() {
    FILE *fp = fopen("server.txt", "r");
    char city[21];

    int seat = 0;

    while (fscanf(fp, "%s %d", city, &seat) != EOF) {
        printf("%s %d\n", city, seat);
    }

    fclose(fp);

    return 0;
}
