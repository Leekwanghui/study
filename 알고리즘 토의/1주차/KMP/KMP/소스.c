#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char str[101];

 	scanf("%s", str);
	
	for (int i = 0; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') 
			printf("%c", str[i]);
			
	}
}