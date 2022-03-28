#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

union u {
    double db;
    float fl;
    unsigned un;
    unsigned long long ul;
} uu;

int main() {
    char str[10] = "";

    scanf("%s", str);

    if (str[0] == 'f') {
        float f;
        int t = 0;
        int sizee = sizeof(float) * 8 - 1;

        scanf("%f", &f);
        uu.fl = f;

        for (int k=sizee; k>=0; k--) {
            printf("%d", (uu.un >> k) & 1);
            t += 1;

            if (t == 4) {
                t = 0;

                printf(" ");
            }
        }
    }

    else if (str[0] == 'd') {
        double d;
        int t = 0;
        int sizee = sizeof(double) * 8 - 1;

        scanf("%lf", &d);
        uu.db = d;

        for (int k=sizee; k>=0; k--) {
            printf("%lld", (uu.ul >> k) & 1);
            t += 1;

            if (t == 4) {
                t = 0;

                printf(" ");
            }
        }
    }

    else {
        printf("0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 1011 1111 1111 1111 1000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000");
    }

    return 0;
}
