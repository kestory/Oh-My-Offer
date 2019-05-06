#include <iostream>
#include <string>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;
int ans = 0;

void func(string x) {
	int len = x.length();
	bool flag = false;
	for ( int i = 0; i < len - 1; i++) {
		if (x[i] == x[i + 1]) {
			ans++;
			flag = true;
//			D(x)
			x.erase(i, 2);
			i -= 2;
			if(i<0)
			break;
//			D(i)
//			D(x)
		}
	}
	if (flag)
		func(x);

}

int main(int argc, char *argv[]) {
	string x;
	cin >> x;
	func(x);
	cout << ans;
}
/*
fqweeqe
1
rgghhjjry
4
aaabbbcccaa
4
*/
