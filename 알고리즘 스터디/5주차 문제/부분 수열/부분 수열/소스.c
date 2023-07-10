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
        max = 0; //최종 출력할 수열의 길이 0으로 초기화
        for (int j = 0; j < i; j++)
        {
            if (num[i] > num[j]) //j가 현재 i보다 작은 값만 탐색
            { 
                if (dp[j] > max) { // 전의 dp값이 현재 최대값은 max보다 클 경우
                    max = dp[j]; 
                }
            }
        }
        dp[i] = max + 1; // i는 자신보다 작은 값만 탐색했으므로 +1 해준다.
        res = compare(res, dp[i]);
    }
    printf("%d", res);

}