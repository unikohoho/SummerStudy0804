//���ǹ� ���� : switch��

#include<stdio.h>

int main(void) {
	int n;
	printf("1~3 ���� �Է� : ");
	scanf("%d", &n);

	switch (n) {
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Four\n");
	default:
		printf("Wrong number!!\n");
	}
	return 0;

}