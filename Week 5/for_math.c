// for_math.c
#include <stdio.h>

int for_sum(int);
int for_mul(int);

int main() {
	int sum = 0,
		mul = 1;

	sum = for_sum(sum); // 0�� �ְ� ���� �޴°�?
	printf("Sum result: num = 5, sum = %d\n", sum);

	mul = for_mul(mul); // 1�� �ְ� ���� �޴°�?
	printf("Mul result: num = 5, mul = %d\n", mul);

	return 0;
}

int for_sum(int sum) {
	for (int num = 1; num <= 5 ; num++) {
		// �ջ��ϱ� �� sum ���� ����Ͽ� 'num + num = '�̶�� �����
		printf("num(%d) + sum(%d) = ", num, sum);
		// sum�� num�� ����
		sum = sum + num;
		// ���� �� sum ���� ����ϰ� ���� �ٲ�
		printf("%d\n", sum);
	}
	return sum;
}

int for_mul(int mul) {
	for (int num = 1; num <= 5; num++) {
		// ���ϱ� �� sum ���� ����Ͽ� 'num * num = '�̶�� �����
		printf("num(%d) * sum(%d) = ", num, mul);
		// sum�� num�� ����
		mul = mul * num;
		// ���� �� sum ���� ����ϰ� ���� �ٲ�
		printf("%d\n", mul);
	}
	return mul;
}