#include <stdio.h>
int main() {
	int dp[101][11];
	int ans = 0;
	int n;

	scanf("%d", &n); //자릿 수 입력

	for (int i = 0; i < 10; i++) { //입력 받은 수가 1자리인 경우 
		dp[1][i] = 1; //dp의 첫 배열은 1로 초기화
	}

	for (int i = 2; i <= n; i++) { //입력 받은 수가 2자리 이상인 경우

		dp[i][0] = dp[i - 1][1]; //끝자리 수가 0일 때

		for (int j = 1; j <= 9; j++) 
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000; //끝자리 수가 1~8일 때


		dp[i][9] = dp[i - 1][8]; //끝자리 수가 9일 때
	}

	for (int i = 1; i < 10; i++) 
		ans = (ans + dp[n][i]) % 1000000000; //총 경우의 수
	

	printf("%d", ans); //정답 출력

	return 0;
}