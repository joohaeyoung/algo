/*
문제
숫자와 콤마로만 이루어진 문자열 S가 주어진다.이 때, S에 포함되어있는 자연수의 합을 구하는 프로그램을 작성하시오.

S의 첫 문자와 마지막 문자는 항상 숫자이고, 콤마는 연속해서 주어지지 않는다.주어지는 수는 항상 자연수이다.

입력
문자열 S가 여러 줄에 걸쳐서 주어진다.S의 길이는 최대 10, 000이다.포함되어있는 정수는 1, 000, 000보다 작거나 같은 자연수이다.

출력
문자열 S에 포함되어 있는 자연수의 합을 출력한다.

예제 입력  복사
10, 20,
3
0, 50
, 1
00
예제 출력  복사
210

*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

	string s;

	string line;

	while (cin >> line) {//cin 은 공백을 끝으로 생각한다. 

		s += line;

	}

	istringstream sin(s);

	string num;
	int sum = 0;

	while (getline(sin, num, ',')) {
		sum += stoi(num);

	}

	cout << sum << '\n';



	return 0;
}