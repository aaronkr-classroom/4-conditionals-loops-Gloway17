// 369.c
/*
369 게임 작성하기.
1. 조건문
2. 반복문
3, 6, 9 있으면 '짝' 출력하기
아니면 숫자 출력
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check369(int);

int main() {
	int num = 0;

	printf("369 게임 환영합니다!\n");
	printf("몇까지 할까요? ");
	scanf_s("%d", &num);

	check369(num);
}

void check369(int num) {
	for (int i = 1; i <= num; i++) {
		char num_str[123];
		itoa_s(i, num_str, 10);
		for (int j = 0; num_str[j] != '\0'; j++) {
			if (num_str[j] == '3' || num_str[j] == '6' || num_str[j] == '9')
				printf("짝 ");
			else
				printf("%d ", i);
		}
	}
}