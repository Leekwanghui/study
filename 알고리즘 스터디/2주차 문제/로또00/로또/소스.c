#include <stdio.h>
#include <conio.h>
//#include <stdbool.h>

int K;
int sidx =0;
int idx = 0;
int SS[100000][13];
int S[100000][13]; //С§Че

void pick(int start, int depth) {
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
			
			printf("%d", SS[0][i]);
		printf("\n");
	}
	else
	{
		for (int i = start; i < K; i++)
			for (sidx = 0;; sidx++) {

				SS[sidx][depth] = S[i];

				pick(i + 1, depth + 1);
			}
			
	}


}



int main() {

	while(1)
	{
		scanf("%d", &K);
		if (K == 0) break;
		
		for(int i = 0;i<K;i++)
			scanf("%d", &S[sidx][i]);
		



		char temp;
		
		while (1) {
			scanf("%s", &temp);
			if (temp == "\n")
				sidx++;
			printf("%d", sidx);
		}break;
			
		
		
		pick(0, 0);
			printf("\n");


	}

	return 0;

}

