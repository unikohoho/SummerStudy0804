//switch문 : 신호등의 색상을 입력하면 색상에 따라 메시지를 출력하는 프로그램
//r = 정지
//Y = 대기
//G = 출발

#include<stdio.h>

int main(void) {
	char color;

	printf("신호등의 색상을 입력하시오 (R, G, Y) : ");
	scanf("%c", &color);

	switch (color) {
	case 'R':
	case 'r':
		printf("정지!\n");
		break;
	case 'Y':
	case 'y':
		printf("대기!\n");
		break;
	case 'G':
	case 'g':
		printf("출발!\n");
		break;
	default:
		printf("신호등 오류입니다!\n");

	}
}