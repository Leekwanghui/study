#include <stdio.h>
#define _CET_SECURE_NO_WARRININGS


int main(void) {
	int n;
	int sum[46];
	sum[0] = 0, sum[1] = 1;

	scanf("%d", &n);

	for (int i = 0; i <=45; i++) {
		sum[i + 2] = sum[i + 1] + sum[i];
	}

	printf("%d", sum[n]);
	return 0;

}
