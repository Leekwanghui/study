#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	int x = n / 5;
	int cnt = 0;
	
	if (n % 5 == 0)cnt = cnt + x;
	else if (n % 5 == 3)cnt = cnt + x + 1;
	else
	{
		for (int i = x; i >= 0; i--) {
			if((n - (5 * i)) % 3==0)
				cnt = cnt + i + (n - (5 * i)) / 3;

		}
	}
	if (cnt == 0)
		printf("%d", -1);
	else
		printf("%d", cnt);

	return 0;
}