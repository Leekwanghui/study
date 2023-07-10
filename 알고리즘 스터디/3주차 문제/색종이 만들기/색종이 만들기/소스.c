#include <stdio.h>
#include <memory.h>

int N;
int map[129][129];
int w_cnt = 0;
int b_cnt = 0;
int cnt = 0;

void div(int x, int y, int N) {
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (map[i][j]!=0) {
				cnt++;
			}
		}
	}
	if (cnt==0)
		w_cnt++; 
	else if (cnt == N * N)
		b_cnt++; 
	else {
		div(x, y, N / 2);
		div(x, y + N / 2, N / 2);
		div(x + N / 2, y, N / 2);
		div(x + N / 2, y + N / 2, N / 2);
	}
	return;
}


int main() {
	scanf("%d", &N);
	//memset(map, 0, sizeof(map));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &map[i][j]);

	div(0, 0, N);

	printf("%d\n", w_cnt);
	printf("%d", b_cnt);
	return 0;
}