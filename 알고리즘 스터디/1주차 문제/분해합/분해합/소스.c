#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int N, M = 0, n, m, len = 0, sum = 0,num = 0;
	
	scanf("%d", &N);
	n = N;
	
	while (n > 0) {
		n /= 10;
		len++;
	}//�ڸ��� ���ϱ�
	//printf("%d\n",len);
	
	m = N - len * 9;//�ּ� ���� ���ϱ�
	//printf("%d\n", m);

	for (int i = m; i <= N; i++) {
		num = i;
		sum += num; //������ ���ϱ�
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}//�ڸ��� ���ϱ�

		if (sum == N) {
			M = i;
			break;
		}
		sum = 0;
	}
	printf("%d", M);
	return 0;
}