#include <stdio.h>
#define _CRT_SECURE_NO_WARNING
int main()
{
	int i, j, k , jack = 0;
	int n, m;
	int sum = 0;
	int kard[100] = { 0 };
	scanf("%d%d", &n, &m); //N�� M �Է�
	for (i = 0;i < n ;i++)
	{
		scanf("%d", &kard[i]); //N���� ī�尪 �Է�
		//printf("%d ", kard[i]); //N���� ī�尪 ���
	}
	for(i = 0;i < n-2 ;i++)
		for(j = 0; j < n-1; j++)
			for (k = 0; k < n; k++) {
				if (i != j && j != k && k != i)//i, j, k �ּڰ� �����ϸ� ���ǹ� �� ���͵� ��
				{
				sum = kard[i] + kard[j] + kard[k]; //ī�� 3���� ���� ����
				}
				if (jack < sum && sum <=  m)
					jack = sum; //�ռ� ���� �պ��� ũ��, M���� ���� ���� �� �ݺ����� ��������
			}
	printf("%d", jack);
	return 0;
}