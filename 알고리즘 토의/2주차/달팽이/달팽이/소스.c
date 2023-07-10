#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	long v;
	int res = 0;

	scanf("%d%d%d", &a, &b, &v);

	res = ceil((double)(v - b) / (a - b));

	printf("%d", res);
	return 0;
}