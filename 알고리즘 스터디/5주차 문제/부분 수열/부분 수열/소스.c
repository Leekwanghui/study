#include <stdio.h>

int compare(int a, int b) {
	if (a > b)return a;
	else return b;
}

int main() {
	int N, max, res = 0;
    int num[1001] = { 0 };
    int dp[1001] = { 0 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
    for (int i = 0; i < N; i++) {
        max = 0; //���� ����� ������ ���� 0���� �ʱ�ȭ
        for (int j = 0; j < i; j++)
        {
            if (num[i] > num[j]) //j�� ���� i���� ���� ���� Ž��
            { 
                if (dp[j] > max) { // ���� dp���� ���� �ִ밪�� max���� Ŭ ���
                    max = dp[j]; 
                }
            }
        }
        dp[i] = max + 1; // i�� �ڽź��� ���� ���� Ž�������Ƿ� +1 ���ش�.
        res = compare(res, dp[i]);
    }
    printf("%d", res);

}