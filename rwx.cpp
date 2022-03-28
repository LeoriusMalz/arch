#include <stdio.h>
#include <stdlib.h>

int main() {
    char A[4] = "";

    scanf("%s", A);

    for (int k=0; k<3; k++)
        switch (A[k]) {
            case '1':
                printf("--x");
                break;

            case '2':
                printf("-w-");
                break;

            case '3':
                printf("-wx");
                break;

            case '4':
                printf("r--");
                break;

            case '5':
                printf("r-x");
                break;

            case '6':
                printf("rw-");
                break;

            case '7':
                printf("rwx");
                break;

            default:
                printf("---");
                break;
        }

    return 0;
}
