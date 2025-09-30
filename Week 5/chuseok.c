// chuseok.c
#include <stdio.h>

void print_calendar(int this_mth);

int main() {
	/*
	���� ����:
	1. ���ǹ�
	2. �ݺ���
	*/
	int chuseok_mth = 10;
	int chuseok = 6;

	int this_mth = 9;
	int today = 30;

	// 1. ���ǹ�
	if (this_mth == chuseok_mth) {
		printf("Chuseok is coming!");
	}
	else {
		printf("No Chuseok yet �Ф�");
	}

	// switch �߰�

	// 2. �ݺ���
	// ����: for(������; ����; ����/����) { ���ù�; }
	for (int i = today; i < 31; i++) {
		printf("Today is %d�� %d��!", this_mth, today);
	}

	// �޷� ����ϱ�
	print_calendar(this_mth);

	return 0;
}

void print_calendar(int this_mth) {
	int short_mth = 2, // 2�� = 28 or 29
		mid_mth[] = { 4, 6, 9, 11 };
	int days;

	switch (this_mth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		case 12:
		days = 31;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;

	case 2:
		days = 28;
		break;

	default:
		printf("That's not a month!");
		return;
	}

	printf("\n*** %d�� ***\n", this_mth);
	for (int i = 1; i <= days; i++) {
		printf("%2d ", i);
		if (i % 7 == 0) printf("\n");
	}
}