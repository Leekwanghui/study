#include <stdio.h>
void stack(int l, char s[1000]) {
	for (int i = 0; i < l; i++) {
		//if (s[i]==' ') {
			//for (int j = i; i > 0; i--)
				printf("%s", s[3]);
		//}
	}

}

int main() {
	char str[1000] = "0";
	
	int n;
	int length;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		gets(str);
		length = strlen(str);
		stack(length, str);

	}


}