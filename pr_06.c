//switch�� : ��ȣ���� ������ �Է��ϸ� ���� ���� �޽����� ����ϴ� ���α׷�
//r = ����
//Y = ���
//G = ���

#include<stdio.h>

int main(void) {
	char color;

	printf("��ȣ���� ������ �Է��Ͻÿ� (R, G, Y) : ");
	scanf("%c", &color);

	switch (color) {
	case 'R':
	case 'r':
		printf("����!\n");
		break;
	case 'Y':
	case 'y':
		printf("���!\n");
		break;
	case 'G':
	case 'g':
		printf("���!\n");
		break;
	default:
		printf("��ȣ�� �����Դϴ�!\n");

	}
}