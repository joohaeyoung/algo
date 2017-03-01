/*
문제
숫자와 콤마로만 이루어진 문자열 S가 주어진다. 이 때, S에 포함되어있는 정수의 개수를 구하는 프로그램을 작성하시오.

S의 첫 문자와 마지막 문자는 항상 숫자이고, 콤마는 연속해서 주어지지 않는다. 또, 0으로 시작하는 정수는 주어지지 않는다.

입력
첫째 줄에 문자열 S가 주어진다. S의 길이는 최대 100이다.

출력
문자열 S에 포함되어 있는 정수의 개수를 출력한다.

예제 입력  복사
10,20,30,50,100
예제 출력  복사
5
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int cnt = 0;
	while (getline(cin, s, ',')) {
		cnt += 1;
	}
	cout << cnt << '\n';
	return 0;
}

