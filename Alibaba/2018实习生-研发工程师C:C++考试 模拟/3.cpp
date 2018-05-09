#include <iostream>
using namespace std;
int M[10][10];

//从num到num+n*n-1
//1 ~ 100
void func(int num, int x, int y, int n) {
	if (n < 2) return;//这里n<比2小的数写起来都不犯法
	int px = x, py = y;
	for (; py < y + n; py++)
		M[px][py] = num++;

	for (px++, py--; px < x + n; px++)
		M[px][py] = num++;

	for (px--, py--; py >= y; py--)
		M[px][py] = num++;

	for (px--, py++; px > x; px--)
		M[px][py] = num++;

	func(num, x + 1, y + 1, n - 2);
}

int main() {
	//func(1, 0, 0, 4);
	func(1, 0, 0, 10);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			cout << M[i][j] << '\t';
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			sum += M[i][j];
	cout << sum;
	//1+2+3+4+36+37+38+39+35+64+65+66+34+63+84+85=656
	return 0;
}
