/*
Submission Details:

mananshah
378A - Playing with Dice
GNU C++0x

Accepted
15 ms
0 KB
*/

#include<iostream>
//need this for the Online Judge
#include<cstdlib>

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

bool ca(int x, int a, int b){ return abs(x - a) < abs(x-b); }
bool cb(int x, int a, int b) { return abs(x - a) > abs(x - b); }

int main()
{
	int a, b;
	cin >> a >> b;
	//p1 win
	int x = 0;
	for (int i = 1; i < 7; i++) if (ca(i, a, b)) x++;
	
	int y = 0;
	//p2 win
	for (int i = 1; i < 7; i++) if (cb(i, a, b)) y++;

	cout << x << " ";
	if (x - y == 6) cout << "0"; else cout << 6 - x - y;
	cout << " " << y;
	return 0;
}