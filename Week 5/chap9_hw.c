// chap9_hw.c
// 슬라이드 89의 코드 작성 및 실행
#include <stdio.h>

void main() {
	int m, n;
	for (m = 5; m < 7; m++) {
		for (n = 0; n < 3; n++) {
			if (m == 5 && n == 1) break;
			if (n == 2) continue;
			printf("m(%d) - n(%d) \n", m, n);
		}
	}

	printf("Q1 expected output:\n");
	printf("m(5) - n(0) \n");
	printf("m(6) - n(0) \n");
	printf("m(6) - n(1) \n");

	int step = 2, i;

	while (step <= 9) {
		i = 1;
		while (i <= 9) {
			printf("%d * %d = %d\n", step, i, step * i);
			i++;
		}
		step++;
	}

	return 0;
}

/*
5 0
6 0
6 1
*/