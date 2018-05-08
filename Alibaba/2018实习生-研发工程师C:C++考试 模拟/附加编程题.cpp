/*



*/
#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int a[1000000];
	for (int i = 0; i < N; ++i)
		cin >> a[i];

	int re;
	bool flag = false;
	for (int i = 0; i < N; ++i)
		if (a[i] % K== 0)
			flag = true;
	if(flag=false){
		cout<<0;
		return 0;
	}

	return 0;
}

