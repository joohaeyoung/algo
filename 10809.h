#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s;
	cin >> s;

	for (int i = 'a'; i <= 'z'; i++) {

		auto it = find(s.begin(), s.end(), i);

			if ( it != s.end() )
				cout << it - s.begin()<<' ';
			else
				cout << -1<< ' ';

	}

	return 0;


}