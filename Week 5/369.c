// 369.c
/*
369 ���� �ۼ��ϱ�.
1. ���ǹ�
2. �ݺ���
3, 6, 9 ������ '¦' ����ϱ�
�ƴϸ� ���� ���
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check369(int);

int main() {
	int num = 0;

	printf("369 ���� ȯ���մϴ�!\n");
	printf("����� �ұ��? ");
	scanf_s("%d", &num);

	check369(num);
}

void check369(int num) {
	for (int i = 1; i <= num; i++) {
		char num_str[123];
		itoa_s(i, num_str, 10);
		for (int j = 0; num_str[j] != '\0'; j++) {
			if (num_str[j] == '3' || num_str[j] == '6' || num_str[j] == '9')
				printf("¦ ");
			else
				printf("%d ", i);
		}
	}
}