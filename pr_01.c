//���ǹ� ���� :  ����ڷκ��� �� ������ �Է� �޾Ƽ� ū ��, ���� ���� ����ϴ� ���α׷� �ۼ�

#include<stdio.h>

int main(void) {
	int n1, n2, large, small;

	printf("�� ������ �Է����ּ��� : ");
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