#include<stdio.h>
int N;
int map[65][65];


void div(int x, int y, int N) {
	int temp = map[x][y];
	if (N == 1) {
		printf("%d", map[x][y]);
		return 0;
	}

	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (temp != map[i][j]) {
				printf("(");
				div(x, y, N / 2);
				div(x, y + N / 2, N / 2);
				div(x + N / 2, y, N / 2);
				div(x + N / 2, y + N / 2, N / 2);
				printf(")");
				return 0;
			}
		}
	}
	printf("%d", temp);
}


int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%1d", &map[i][j]);

	div(0, 0, N);
	return 0;
}