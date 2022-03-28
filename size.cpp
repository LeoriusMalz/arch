#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

int main() {
    char type[11];

    scanf("%s", type);

    if (type[0] == 'f')
        printf("%g", -log(FLT_EPSILON) / log(2));

    else if (type[0] == 'd')
        printf("%g",  -log(DBL_EPSILON) / log(2));

    else if (type[0] == 'l')
        printf("%Lg",  -log(LDBL_EPSILON) / log(2));

    return 0;
}
