#include <iostream>
#include <list>
using namespace std;

int main() {

	int n;//풍선의 갯수.
	list<pair<int, int>> a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back({ x,i });//풍선안의 종이 숫자, 풍선번호. 
	}

	auto it = a.begin();

	for (int i = 0; i < n - 1; i++) {
		
		cout << (it->second) << ' ';
		int step = it->first;


		if (step > 0) {// 종이에 나온것이 + 방향으로 이동해야한다면

			auto temp = it;// it 으로 지울것이라서 temp 가 꼭 필요하다. 
			++temp;

			if (temp == a.end()) {//원이니까 끝이면 원래되로 되돌아 온다. 
				temp = a.begin();
			}

			a.erase(it);// 지우고
			it = temp;// temp 에 있는 값을 넣는다. 

			for (int i = 1; i < step; i++) {// 이미 한단계 이동한 것이나 다름없으니 3스텝이라면 2스텝을 이동한다. 

				++it;

				if (it == a.end()) {// 원형이니까 이동할때 end이면 다시 begin으로 만들어주어서 원점으로 돌아온다~
					it = a.begin();
				}
			}

		}
		else if (step < 0) {//종이에 나온것이 - 방향으로 이동해야한다면

			step = -step;//어차피 이동횟수는 양수이기 떄문에 양수로 바꾸어준다.

			auto temp = it;

			if (temp == a.begin()) {//원형임을 잘생각해야한다. 
				temp = a.end();
			}

			--temp;
			a.erase(it);
			it = temp;

			for (int i = 1; i < step; i++) {

				if (it == a.begin()) {
					it = a.end();
				}
				--it;
			}

		}
	}
	cout << a.front().second << '\n';
	return 0;

}
