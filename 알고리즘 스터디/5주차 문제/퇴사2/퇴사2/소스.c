#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int T[1500002]; //��� �Ⱓ
int P[1500002]; //��� �ݾ�
int dp[1500002]; //����

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


int main(void)
{
	int N; //��� ��¥

	scanf("%d", &N); //��� ��¥�� �Է� ����
	for (int i = 1; i <= N; i++)
		scanf("%d %d", &T[i], &P[i]); // ��� �Ⱓ�� �ݾ��� �Է¹���
	

	for (int i = N; i >= 1; i--)
	{	
		if (i + T[i] > N + 1)//��� �Ⱓ�� ��糯�� ���� ���	
			dp[i] = dp[i + 1];
		else//�׷��� ���� ��� �ϰų� �����ʰų� �� ���� �ִ��� ����		
			dp[i] = max(dp[i + 1], P[i] + dp[i + T[i]]);
	}



	printf("%d", dp[1]);
	return 0;
}