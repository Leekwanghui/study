#include <stdio.h>
#include <string.h>
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	int n;
	int cnt = 0;
	int a[1001];
	int dp[1001] = { 0 };
	scanf("%d", &n);

	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (dp[i] < a[j]) {
				dp[i] = max(dp[i], a[j]);
			}
		}
	}

	//int count = sizeof(dp) / sizeof(dp[0]);

	for (int i = 0; i <= n; i++)
		if (dp[i] > 0)
			cnt++;

	printf("%d\n", cnt);

	for(int i=1; i<=n; i++)
		printf("%d ", dp[i]);
	return 0;
}