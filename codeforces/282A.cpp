/*
Submission Details:

mananshah
282A - Bit++
GNU C++0x

Accepted
15 ms
0 KB
*/

#include <assert.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <ctime>
#include <cctype>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

int main()
{
	int c = 0;
	int num; cin >> num;
	string t;
	for (int i = 0; i < num; i++){
		cin >> t;
		auto fplus = t.find("++");
		auto fminus = t.find("--");
		if (fplus != string::npos && t.length() == 3) c++;
		else if (fminus != string::npos && t.length() == 3) c--;
	}
	cout << c << endl;
	return 0;
}