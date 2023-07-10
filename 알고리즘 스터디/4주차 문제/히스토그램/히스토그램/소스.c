#include <stdio.h>

int h[100000];

int min(int x, int y) {
	if (x <= y)
		return x;
	else
		return y;
}
int max(int x, int y) {
	if (x >= y)
		return x;
	else
		return y;
}

int his(int left, int right) {
	if (left == right)
		return h[left];
	int mid = (left + right) / 2;
	int ans = max(his(left, mid), his(mid + 1, right));

	int low = mid;
	int high = mid + 1;
	int height = min(h[low], h[high]);
	ans = max(ans, height * 2);

	while (left < low || high < right) 
	{
		if (high < right && ((low == left) || h[low - 1] < h[high + 1])) 
		{
			high++;
			height = min(height, h[high]);
		}
		else 
		{
			low--;
			height = min(height, h[low]);
		}
		ans = max(ans, height * (high - low + 1));
	}
	return ans;
}


int main() {
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &h[i]);
	printf("%d", his(0, N - 1));
}