#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000000];
	int i, len;
	int max = 0, select = 0, res = 0;
	int cnt[26] = { 0 };

	scanf("%s", &str);
	len = strlen(str);

	for (i = 0; i < len; i++) {
		for (int j = 'A'; j <= 'Z'; j++)
			if (str[i] == j)
				cnt[j - 'A']++;

		for (int j = 'a'; j <= 'z'; j++)
			if (str[i] == j)
				cnt[j - 'a']++;
	}

	for (i = 0; i < 26; i++) {	
		if (max < cnt[i])
		{
			max = cnt[i];
			select = i;
		}
	}

	for (i = 0; i < 26; i++) {
		if (max == cnt[i])
		{
			res++;
		}	
	}
		
	if (res > 1)
		printf("?\n");
	else
		printf("%c", select + 'A');

	return 0;
}