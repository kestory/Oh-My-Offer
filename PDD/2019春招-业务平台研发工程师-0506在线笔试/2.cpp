#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;
int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;
	vector<int> x(K);
	for (int i = 0; i < K; i++) {
		cin >> x[i];
		x[i] = N - x[i];
	}
	long long ans = 0;
	for (int i = 0; i < K; i++)
		ans += x[i];
	ans = N - ans;
	if (ans < 0)
		cout << 0;
	else
		cout << ans;
}

/*

1000 2
800 800

300 3
100 200 300

300 3
99 98 97


*/
