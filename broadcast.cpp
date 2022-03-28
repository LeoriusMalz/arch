#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int A[4] = {0, 0, 0, 0};
	unsigned int B[4] = {0, 0, 0, 0};
	unsigned int C[4] = {0, 0, 0, 0};

	scanf("%d.%d.%d.%d", &A[0], &A[1], &A[2], &A[3]);
	scanf("%d.%d.%d.%d", &B[0], &B[1], &B[2], &B[3]);

	for (int i = 0; i < 4; i++)
		C[i] = (~B[i] & 255) | (A[i] & B[i]);

	for (int i = 0; i < 4; i++) {
		if (i == 3)
			printf("%d", C[i]);
		else
			printf("%d.", C[i]);
	}

	return 0;
}
