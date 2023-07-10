#include<stdio.h>
#include<string.h>


int main() {
	int t;
	char str[50];
	int len;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int cnt = 0;
		scanf("%s", &str);
		len = strlen(str);

		for (int j = 0; j < len; j++) {
			while (cnt >= 0)
			{
				if (str[j] == '(') {
					cnt++;
					break;
				}
				else{
					cnt--;
					break;
				}
			}

		}

		printf("%d\n", cnt);

		if(cnt==0)
			printf("YES");
		else
			printf("NO");



	}

	return 0;
}