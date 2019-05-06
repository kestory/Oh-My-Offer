#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

int d[10000][2];
int n, k;

int CountNum(double a) {
	int num = 0;
	for (int i = 0; i < n; ++i)
		if (a >= d[i][0] && a <= d[i][1])
			num++;
	return num;
}

int main(int argc, char *argv[]) {
	vector<double> x;

	cin >> n >> k;
	int l, r;

	int min = 20000;
	int max = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> l >> r;
		d[i][0] = l;
		d[i][1] = r;
		if (l > max)
			max = l;
		if (r > max)
			max = r;
		if (l < min)
			min = l;
		if (r < min)
			min = r;
	}

//D(max)D(min)D(n)
	int num_i = 0;
	for (double i = min; i <= max; i += 0.5)
	{	//D(i)D(CountNum(i))
		if (CountNum(i) >= k) {
//			D(i)
			num_i++;
			x.push_back(i);
		}
	}
//till now, all the elements have been picked up
	int aaa[10000][2];
	if (x.size() != 0)
		aaa[0][0] = x[0];
	else {
		cout << 0;
		return 0;
	}
	int ans_num = 0;
	for (int i = 0; i < num_i - 1; i++) {
		if (x[i + 1] - x[i] == 0.5)
			continue;
		else //if(x[i+1]-x[i]==1)
		{
			aaa[ans_num][1] = x[i];
			aaa[++ans_num][0] = x[i + 1];
		}


	}
	aaa[ans_num][1] = x[num_i - 1];
	ans_num++;
//	D(ans_num)
	cout << ans_num << endl;
	for (int i = 0; i < ans_num; i++)
		cout << aaa[i][0] << ' ' << aaa[i][1] << endl;

	return 0;
}

/*
----
3 2
0 5
-3 2
3 8
---
2
0 2
3 5
----
----
3 2
0 5
-3 3
3 8
---
1
0 5
----
*/
