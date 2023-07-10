#include <stdio.h>
int main() {
	
	int num[100001] = { 0 };
	int n;

	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &num[i]);

	int max = 0;
	int cnt = 0;
	for (int i = n-1; i >= 0; i--) 
	{
		if (num[i] > max) {
			cnt++;
			max = num[i];
		}
	}
	
	printf("%d", cnt);

	return 0;
}