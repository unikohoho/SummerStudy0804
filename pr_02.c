//���ǹ� ���� :  �� ������ ������ ���ù�ȣ�� �Է� �޾� ���� ����� ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int n1, n2, choice;
	double result;

	printf("�� ���� �Է� >>> ");
	scanf("%d%d", &n1,&n2);

	printf("������ ����(����:1, ����:2, ����:3, ������:4)>>>");
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
		printf("�������� ���� �޴��Դϴ�!\n");
		return;
	}

	printf("��� : %.2lf", result);

	return 0;

}