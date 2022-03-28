#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    int y = 0;

    scanf("%x %x", &x, &y);

    return x ^ y;
}
