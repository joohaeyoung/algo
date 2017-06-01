#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int n;
	int DP[10000] = { 0 };

	
	cin >> n;

	DP[1] = 1;
	DP[2] = 2;

	for (int i = 3; i <= n; i++) {

		DP[i] = DP[i - 1] + DP[i - 2];

	}

	printf("%d", DP[n]);

	return 0;


}