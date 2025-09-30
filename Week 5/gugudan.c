// gugudan.c
#include <stdio.h>

void dan(int);

int main() {
	for (int d = 1; d <= 9; d++)
	{
		printf("*** %d dan: ***\n", d);
		// 내부 for 문은 곱하기(*) for 문이다.
		for (int i = 1; i <= 9; i++) {
			printf("%d x %d = %d\n", d, i, d * i);
		}
		// dan(d);
		printf("\n");
	}
	return 0;
}

void dan(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", step, i, step * i);
	}
}