//���ǹ� ����: ������ �Է¹޾� ������ ����ϴ� ���α׷�
//A,B������ ���������, C,D������ �������������� �з�����!

#include<stdio.h>

int main(void) {
	int score;
	char grade;

	printf("What is your score? ");
	scanf("%d", &score);

	if (score >= 80) {
		printf("great score!\n");
		if (score >= 90)
			grade = 'A';
		else
			grade = 'B';

	}
	else if (score >= 60) {
		printf("average score!\n");
		if (score >= 70)
			grade = 'C';
		else
			grade = 'D';
	}
	else {
		printf("You failed.\n");
		grade = 'F';
	}

	printf("YOUR GRADE = %c\n", grade);

	return 0;

}