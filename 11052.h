#include <stdio.h>
int n, i, j, a[1001], dp[1001];
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (i = 1; i <= n; i++) for (j = 1; j <= i; j++)
		if (dp[i] < dp[i - j] + a[j]) dp[i] = dp[i - j] + a[j];
	printf("%d", dp[n]);
	return 0;
}