#include <stdio.h>

int K;
int sidx = 0;
int S[14]; 
int SS[14]; 

void pick(int start, int depth) {

	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
			printf("%d", SS[i]);
		printf("\n");
	}

	else
	{
		for (int i = start; i < K; i++)
		{
			SS[depth] = S[i];
			pick(i + 1, depth + 1);
		}
	}
}

int main(void) {
	while (1)
	{
		scanf("%d", &K);
		if (K == 0) break;
		for (int i = 0; i < K; i++) 
			scanf("%d", &S[i]);
		
		
		int temp;
		scanf("%d", &temp);

		pick(0, 0);
		//printf("\n");
		

	}

	

	return 0;
}