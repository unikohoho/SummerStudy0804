//조건문 연습: 성적을 입력받아 학점을 출력하는 프로그램
//A,B학점은 우수학점군, C,D학점은 보통학점군으로 분류까지!

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