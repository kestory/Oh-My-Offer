#include <iostream>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;

int main() {
	int sum = 0;
	for (int i = 100000000; i <= 999999999; ++i)
	{
		int a = i % 10000;
		int b = i / 100000 % 10000;
		int c = b * 10000 + a;
		if (i % c == 0) {
			sum++;
			//D(i)
		}
	}

	D(sum)
	return 0;
}

