#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Stack {


private:
	int arr[10000];
	int point;

public:

	Stack() {
		point = 0;
	}

	void push(int x) {

		arr[point] = x;
		point++;
		
	}

	int pop() {

		if (point == 0) {
			return -1;
		}

		int temp = 0;

		temp = arr[--point];

		arr[point] = 0;

		return temp;
	}

	int size() {

		return point;
	}

	int empty() {

		if (point == 0) {
			return 1;
		}
		else {
			return 0;
		}

	}

	int top() {

		if (point == 0) {
			return -1;
		}

		return arr[point - 1];
	}

};
/*
이렇게 하면 런타임 에러가 난다  ㅜㅜ
int main(void) {

int num;
int aa;
string s = "string";
Stack stack;

cin >> num;

getline(cin, s);


for (int i = 0; i < num; i++) {

getline(cin, s);

if (s.substr(0,4) == "push") {

stack.push(stoi(s.substr(5, s.size() - 1)));

}
else if (s.substr(0,3) == "pop") {

stack.pop();
}
else if (s.substr(0,3) == "top") {
stack.top();
}
else if (s.substr(0,4) == "size") {
stack.size();
}
else if (s.substr(0,5) == "empty") {
stack.empty();
}

}

return 0;
}

*/

int main(void) {

	int n;
	cin >> n;

	Stack s;

	while (n--) {

		string cmd;
		cin >> cmd; //cin  은 공백이나 엔터는 입력을 받지 않는다!!! getline(cin,s )  이거는 입력을 받지만~ !

		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "top") {
			cout << s.top() <<"\n";
		}
		else if (cmd == "size") {
			cout <<s.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << s.empty() << "\n";
		}
		else if (cmd == "pop") {
			cout << s.pop() << "\n" ;
		}
	}

	return 0;

}


