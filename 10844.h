#include <iostream>
using namespace std;
long long d[101][10];
long long mod = 1000000000;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0)d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9)d[i][j] += d[i - 1][j + 1];
			d[i][j] %= mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i < 10; i++)ans += d[n][i];
	ans %= mod;
	cout << ans << endl;
	return 0;
}
[출처] [다이나믹] 백준저지 [10844] 쉬운 계단 수 / [11057] 오르막 수 / [2193] 이친수 / [9465] 스티커 / [2156] 포도주 시식|작성자 문화일상