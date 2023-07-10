#include <stdio.h>
int main() {
	int n, i;
	int p[50], a[50], b[50];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		p[i] = i;
	}
	for (int i = 1; i < n; i++) {
		int j = i; int v = p[i]; 
		while (j > 0 && a[p[j - 1]] > a[v]) 
		{ 
			p[j] = p[j - 1];
			j--; 
		}
		p[j] = v; 
	} 
	for (int i = 0; i < n; i++) 
		a[p[i]] = i;
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	//putchar('\n');



}