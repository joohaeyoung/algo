#include <iostream>
#include <set>
using namespace std;

int main(void){
	
	int n;
	scanf("%d",&n);
	
	multiset<int> s;//멀티셋은 중복된 값을 넣을 수 있다.
	for( int i = 0 ; i < n ; i++){
		
		int x;
		scanf("%d",&x);
		s.insert(x);
	}
	
	int m;
	scanf("%d",&m);
	
	for(int i = 0; i < m ; i++){
		
		int x;
		scanf("%d",&x);
		printf("%d ", s.count(x) );
	
	}
	
	printf("\n");
	
}