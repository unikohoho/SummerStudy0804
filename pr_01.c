//조건문 연습 :  사용자로부터 두 정수를 입력 받아서 큰 수, 작은 수를 출력하는 프로그램 작성

#include<stdio.h>

int main(void) {
	int n1, n2, large, small;

	printf("두 정수를 입력해주세요 : ");
	scanf("%d%d", &n1, &n2);

	printf("input num : (%d, %d)\n", n1, n2);
	
	if (n1 > n2) {
		large = n1;
		small = n2;

	}
	else {
		large = n2;
		small = n1;
	}
	printf("large num : %d\n", large);
	printf("small num : %d\n", small);

	return 0;

}