#include <stdio.h>
int main() {

	char str[1000] = "0";
	char f, l;
	int n, i, length = 0;

	scanf("%d", &n); //�Է¹��� ���ڿ��� ���� �Է�
	for (i = 0; i < n; i++)
	{
		scanf("%s", str); //���ڿ� �Է�

		length = strlen(str); //���ڿ��� ����

		f = str[0]; //ù��° ���ڸ� f�� ����
		l = str[length - 1]; //������ ���ڸ� l�� ����

		printf("%c%c\n", f, l); // ���
	}

	return 0;
}
