#include <stdio.h>

int main(void) {

	int N, K, i = 0;
	int A[11];
	int count=0;
	
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	
	for (i = N - 1; i >= 0; i--) { //ū �������� ���
		if (K >= A[i])// �Ѿ��� �������� Ŭ ��
		{
			count += K / A[i];
			K = K % A[i];
		}
		else if(i == 0 && K > 0) // ������ ���� 
			count++;

	}
	printf("%d", count);
}