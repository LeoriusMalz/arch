#include <stdio.h>
#include <stdlib.h>

int schet(char a, int mslip);
int proverka(char a, int place);

int main() {
	char *resheto = (char*) calloc(12500000, sizeof(char));

	int i = 0;
	int X = 0;

	int sizeb = 0;
	int sizeb_ = 0;
	int bn = 0;

	int slip = 0;
	int sizes_ = 0;

	int res = 0;
	int number = 0;

	scanf("%d", &X);
	int n = X;

	if (X % 2)
		X = (X + 1)/2 + 1;

	else
		X = X/2 + 1;

	if (X % 8)
		bn = (int)(X/8) + 1;

	else
		bn = (int)(X/8);

	for (i = 0; i < bn; i++)
		resheto[i] = 255;

	for (i = 2; (i*i) <= X; i++) {
		slip = i % 8;
		sizeb = (int)(i/8);

		if (proverka(resheto[sizeb], slip)) {
			number = i + (i - 1);

			for (int j = (number+2*number); j < n; j += 2*number) {
				sizes_ = (int)((j+1)/2) % 8;
				sizeb_ = (int)((int)((j+1)/2)/8);

				resheto[sizeb_] = resheto[sizeb_] & (~(128 >> sizes_));
			}
		}
	}


	for (i = 0; i < (bn-1); i++)
		res += schet(resheto[i], 7);

	slip = (X-1) % 8;

	res += schet(resheto[i], slip);
	printf("%d", res-1);
}

int schet(char a, int mslip) {
	int res = 0;
	for (int i = 0; i <= mslip; i++)
		res += proverka(a, i);

	return res;
}

int proverka(char a, int place) {
	return (a >> (7 - place)) & 1;
}
