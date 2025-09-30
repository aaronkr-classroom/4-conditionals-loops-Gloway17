// grades.c
#include <stdio.h>

char if_grade(int);
char switch_grade(int);

int main() {
	int score = 101;
	char grade = switch_grade(score);

	printf("Grade: %d%%, %c", score, grade);

	return 0;
}

// �����̵� 39�� �ڵ� (������ = ��� return ���)
char if_grade(int score) {
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';
	else return 'F';
}

// �����̵� 45�� �ڵ�
char switch_grade(int score) {
	switch (score / 10) {
	case 10: // 100%
	case 9: return 'A';
	case 8: return 'B';
	case 7: return 'C';
	case 6: return 'D';
	default: return 'F';
	}
}