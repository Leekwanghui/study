#include <stdio.h>
int main() {

	char str[1000] = "0";
	char f, l;
	int n, i, length = 0;

	scanf("%d", &n); //입력받을 문자열의 개수 입력
	for (i = 0; i < n; i++)
	{
		scanf("%s", str); //문자열 입력

		length = strlen(str); //문자열의 길이

		f = str[0]; //첫번째 문자를 f에 저장
		l = str[length - 1]; //마지막 문자를 l에 저장

		printf("%c%c\n", f, l); // 출력
	}

	return 0;
}
