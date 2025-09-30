// chp8_hw.c
// Q1, Q2, Q3 작성하고 결과가 콘솔에서 표시하세요.
// 30분 이내 하세요.
#include <stdio.h>

int main() {
	// Q1
	int result = -5;
	if (result == -5) result *= -1;
	printf("Q1. Result: %d\n", result);

	// Q2
	result = -5;
	result = (result == -5) ? (result * -1) : result;
	printf("Q2. Result: %d\n", result);

	// Q3
	result = 5;
	switch (result) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	case 4:
		result *= 10;
		break;
	}
	printf("Q3. expected value: 10, Result: %d\n", result);
}