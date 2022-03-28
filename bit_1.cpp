#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char A;
    A = argv[argc - 1][1];

    if ((A == 'A') || (A == 'C') || (A == 'E') || (A == 'a') || (A == 'c') || (A == 'e'))
        printf("fe\n");
    else if ((A == 'B') || (A == 'D') || (A == 'F') || (A == 'b') || (A == 'd') || (A == 'f'))
        printf("ma\n");
    else if ((int)A%2 == 0)
        printf("fe\n");
    else if ((int)A%2 != 0)
        printf("ma\n");

    return 0;
}
