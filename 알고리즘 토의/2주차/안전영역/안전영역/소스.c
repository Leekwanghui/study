#include <stdio.h>
int N;
int map_1[101][101];		
int map_2[101][101];
int ans = 0;
int max_rain = 0;

int vectX[4] = { 0, 0, 1, -1 };
int vectY[4] = { 1, -1, 0, 0 };

void dfs(int i, int j){
	map_2[i][j] = 0;
	int nextX; int nextY;
	for (int k = 0; k < 4; k++) {
		nextX = i + vectX[k];
		nextY = j + vectY[k];
		if (nextX >= 0 && nextY >= 0 && nextX < N && nextY < N) {
			if (map_2[nextX][nextY] != 0) {
				dfs(nextX, nextY);
			}
		}
	}
}
void solution() {
	for (int k = 0; k <= max_rain; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				map_2[i][j] = map_1[i][j];
				if (map_2[i][j] <= k) {
					map_2[i][j] = 0;
				}
			}
		}
		int safetyzone_cnt = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map_2[i][j] != 0) {
					safetyzone_cnt++;
					dfs(i, j);
				}
			}
		}

		if (ans < safetyzone_cnt) {
			ans = safetyzone_cnt;
		}
	}
}
		
	


int main(void){
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &map_1[i][j]);

			if (max_rain < map_1[i][j])
				max_rain = map_1[i][j];

		}
	}

	solution();
	printf("%d", ans);

	return 0;

}