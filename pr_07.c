/*
조건문 연습
놀이공원의 자유이용권의 가격을 계산하는 프로그램
현재시간과 사용자의 나이를 입력받기
지불해야하는 요금을 출력
오후 5시 이전: 대인 = 34000, 소인(3-12세,65세 이상) = 25000
오후 5시 이후 : 대인, 소인 = 10000 
*/

#include<stdio.h>

int main(void) {
	int age, time, price;

	printf("현재 시간과 나이를 입력하시오(시간, 나이) : ");
	scanf("%d%d", &time, &age);

	if (time < 17) {
		if (age >= 13 && age < 65)
			price = 34000;
		else if (age < 3)
			price = 0;
		else
			price = 25000;
	}
	else
		price = 10000;

	printf("요금은 %d입니다.\n",price);

	return 0;

}
