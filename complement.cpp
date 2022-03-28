#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char A = ' ';

    scanf("%hhd", &A);

    for (int i=7; i>=0; i--)
        printf("%d", ((A >> i) & 1));

    return 0;
}
