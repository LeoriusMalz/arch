#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chtoint(char *, int *);

int main() {
    char a[3];
    int b[8];
    int p1 = 0;
    int p2 = 0;

    for (int i=0; i<8; i++)
        b[i] = 0;

    while (scanf("%s", a) != EOF) {
        chtoint(a, b);
    }

    p1 = 8*b[0] + 4*b[1] + 2*b[2] + b[3];
    p2 = 8*b[4] + 4*b[5] + 2*b[6] + b[7];

    printf("%x%x", p1, p2);

    return 0;
}

void chtoint(char a[], int b[]) {
    if (strcmp(a, "ma") == 0)
        b[7] = 1;

    else if (strcmp(a, "cl") == 0)
        b[6] = 1;

    else if (strcmp(a, "ha") == 0)
        b[5] = 1;

    else if (strcmp(a, "tr") == 0)
        b[4] = 1;

    else if (strcmp(a, "rd") == 0)
        b[3] = 1;

    else if (strcmp(a, "bw") == 0)
        b[2] = 1;

    else if (strcmp(a, "bk") == 0) {
        b[3] = 1;
        b[2] = 1;
    }

    else if (strcmp(a, "ge") == 0)
        b[1] = 1;

    else if (strcmp(a, "gy") == 0)
        b[0] = 1;

    else if (strcmp(a, "da") == 0) {
        b[1] = 1;
        b[0] = 1;
    }
}
