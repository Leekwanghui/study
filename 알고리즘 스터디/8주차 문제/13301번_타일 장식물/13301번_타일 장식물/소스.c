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
	printf("%lld", ans); //long long���̹Ƿ� %d�� �ƴ϶� %lld�� �������

	return 0;
}