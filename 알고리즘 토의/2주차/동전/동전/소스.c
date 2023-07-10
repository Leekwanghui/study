#include <stdio.h>

int main(void) {

	int N, K, i = 0;
	int A[11];
	int count=0;
	
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);

	
	for (i = N - 1; i >= 0; i--) { //큰 동전부터 계산
		if (K >= A[i])// 총액이 동전보다 클 때
		{
			count += K / A[i];
			K = K % A[i];
		}
		else if(i == 0 && K > 0) // 마지막 동전 
			count++;

	}
	printf("%d", count);
}