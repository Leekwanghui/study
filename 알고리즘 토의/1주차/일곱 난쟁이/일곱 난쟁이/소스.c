#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNING

int main(void) {
	int n[10], temp = 0, sum = 0; 
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]); //������ 9���� Ű �Է�
		sum += n[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - n[i] - n[j] == 100) //������ 7���� Ű �� = ��ü �߿� 2���� ������ Ű�� ���Ͱ� ����
			{ 
				for (int k = 0; k < 9; k++) 
				{
					if (k == i || k == j) //������ 2���� ������ 7���� Ű�� �����
					{
						continue;
					}
						//qsort(n, COUNT, sizeof(n[0]), *compare);
						//printf("%d\n", );
					
				}
				return 0;
			}
		}
	}
	return 0;
}

/*int bubble() {

	int temp;

	for (int i = 0; i < 9; i++)   
	{
		for (int j = i + 1; j < 9; j++)   
		{
			if (n[j] > n[j + 1])          
			{                                 
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;           
			}
			return n[j];
		}
	}

}*/




