//조건문 연습 : switch문

#include<stdio.h>

int main(void) {
	char color;

	printf("First letter of your favorite color : ");
	scanf("%c", &color);

	switch(color){
	case 'r':
	case 'R':
		printf("Red\n");
		break;
	case 'b':
	case 'B':
		printf("Blue\n");
		break;
	case 'g':
	case 'G':
		printf("Green\n");
		break;

	default:
		printf("I don't know!\n");

	}

	return 0;

}