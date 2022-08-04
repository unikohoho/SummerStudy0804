//조건문 연습 :  두 정수와 연산자 선택번호를 입력 받아 연산 결과를 출력하는 프로그램

#include<stdio.h>

int main(void) {
	int n1, n2, choice;
	double result;

	printf("두 정수 입력 >>> ");
	scanf("%d%d", &n1,&n2);

	printf("연산자 선택(덧셈:1, 뺄셈:2, 곱셈:3, 나눗셈:4)>>>");
	scanf("%d", &choice);

	if (choice == 1)
		result = n1 + n2;
	else if (choice == 2)
		result = n1 - n2;
	else if (choice == 3)
		result = n1 * n2;
	else if (choice == 4)
		result = (double)n1 / n2;
	else {
		printf("지원되지 않은 메뉴입니다!\n");
		return;
	}

	printf("결과 : %.2lf", result);

	return 0;

}