#include <stdio.h>
long long d[101];

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}


int main() {
	int N;
	scanf("%d", &N);

    d[1] = 1;
    d[2] = 2;
    d[3] = 3;
    d[4] = 4;
    d[5] = 5;
    d[6] = 6;

    for (int i = 7; i <= 100; i++) {
        for (int j = 1; j <= i - 3; j++) {

            d[i] = max(max(d[i - 1] + 1, (d[i - (j + 2)] * (j + 1))), d[i]);
        }
    }

    printf("%d", d[N]);
}