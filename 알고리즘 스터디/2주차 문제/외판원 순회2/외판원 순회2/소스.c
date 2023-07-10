#include <stdio.h>
#include <stdbool.h>



int N; //���� ��
int visit[11]; //���� �湮 üũ
int w[11][11]; //��� ���
int m = 987654321; //�ּ� ���
int sum; //�հ�


void input(void) {
	scanf("%d", &N); //���� �� �Է�
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &w[i][j]); //��� ��� �Է�
}


void sol(int start, int x ,int count, int sum) {
	if (count == N && start == x) //��� ���� �湮 && �ٽ� ���ƿ� ���
	{
		if (sum < m)m = sum;
		return;
	}

	for (int y = 0; y < N; y++)
	{
		if (w[x][y] == 0) continue; //�� �� ���� ���

		if (!visit[x] && w[x][y] > 0) 
		{
			visit[x] = true;
			sum += w[x][y];

			if (sum <= m) //sum�� m���� ���� ���
			{
				sol(start, y, count+1, sum); //���� �湮
			}

			visit[x] = false; //�湮 ��� �ʱ�ȭ
			sum -= w[x][y]; //�հ� �ʱ�ȭ
		}
	}
}


int main() {

	input();

	for (int x = 0; x < N; x++)
		sol(x, x, 0, 0);


	printf("%d", m); //�ּ� ��� ���
}
