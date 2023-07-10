#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int T[1500002]; //상담 기간
int P[1500002]; //상담 금액
int dp[1500002]; //수익

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}


int main(void)
{
	int N; //퇴사 날짜

	scanf("%d", &N); //퇴사 날짜를 입력 받음
	for (int i = 1; i <= N; i++)
		scanf("%d %d", &T[i], &P[i]); // 상담 기간과 금액을 입력받음
	

	for (int i = N; i >= 1; i--)
	{	
		if (i + T[i] > N + 1)//상담 기간이 퇴사날을 넘을 경우	
			dp[i] = dp[i + 1];
		else//그렇지 않을 상담 하거나 하지않거나 둘 중의 최댓값을 구함		
			dp[i] = max(dp[i + 1], P[i] + dp[i + T[i]]);
	}



	printf("%d", dp[1]);
	return 0;
}