// factorial.c
#include <stdio.h>

int factorial(int);

int main() {
	int num = 5,
		result = factorial(num);
	
	printf("%d is %d\n", num, result);
	
	return 0;
}

int factorial(int num) {
	if (num <= 1) return 1;
	else return factorial(num - 1) * num;
}