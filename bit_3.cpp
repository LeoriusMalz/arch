#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* f1 = fopen("bit_3.dat", "r");
    char A[3];
    fscanf(f1, "%s", A);
    fclose(f1);

    FILE* f2 = fopen("bit_3.ans", "w");

    if ((A[0] == '0') || (A[0] == '4') || (A[0] == '8') || (A[0] == 'C') || (A[0] == 'c'))
        fprintf(f2, "bn\n");
    else if ((A[0] == '1') || (A[0] == '5') || (A[0] == '9') || (A[0] == 'D') || (A[0] == 'd'))
        fprintf(f2, "rd\n");
    else if ((A[0] == '2') || (A[0] == '6') || (A[0] == 'A') || (A[0] == 'E') || (A[0] == 'a') || (A[0] == 'e'))
        fprintf(f2, "bw\n");
    else if ((A[0] == '3') || (A[0] == '7') || (A[0] == 'B') || (A[0] == 'F') || (A[0] == 'b') || (A[0] == 'f'))
        fprintf(f2, "bk\n");

    fclose(f2);
    return 0;
}
