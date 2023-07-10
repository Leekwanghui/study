#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNING

int main(void) {
	int n[10], temp = 0, sum = 0; 
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n[i]); //난쟁이 9명의 키 입력
		sum += n[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - n[i] - n[j] == 100) //난쟁이 7명의 키 합 = 전체 중에 2명의 난쟁이 키를 뺀것과 같음
			{ 
				for (int k = 0; k < 9; k++) 
				{
					if (k == i || k == j) //난쟁이 2명을 제외한 7명의 키를 출력함
					{
						continue;
					}
						//qsort(n, COUNT, sizeof(n[0]), *compare);
						//printf("%d\n", );
					
				}
				return 0;
			}
		}
	}
	return 0;
}

/*int bubble() {

	int temp;

	for (int i = 0; i < 9; i++)   
	{
		for (int j = i + 1; j < 9; j++)   
		{
			if (n[j] > n[j + 1])          
			{                                 
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;           
			}
			return n[j];
		}
	}

}*/




