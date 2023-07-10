#include <stdio.h>
int main() {

	long long f[81];
	long long ans;
	int n;
	scanf("%d", &n);

	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i < n+1; i++)
		f[i] = f[i - 1] + f[i - 2];

	ans = (f[n] + f[n - 1]) * 2;
	printf("%lld", ans); //long long형이므로 %d가 아니라 %lld를 해줘야함

	return 0;
}