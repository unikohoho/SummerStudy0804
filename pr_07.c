/*
���ǹ� ����
���̰����� �����̿���� ������ ����ϴ� ���α׷�
����ð��� ������� ���̸� �Է¹ޱ�
�����ؾ��ϴ� ����� ���
���� 5�� ����: ���� = 34000, ����(3-12��,65�� �̻�) = 25000
���� 5�� ���� : ����, ���� = 10000 
*/

#include<stdio.h>

int main(void) {
	int age, time, price;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����) : ");
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

	printf("����� %d�Դϴ�.\n",price);

	return 0;

}
