/*
Submission Details:

mananshah
253A - Boys and Girls
GNU C++0x

Accepted
30 ms
200 KB
*/

#define _CRT_SECURE_NO_WARNINGS

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
#include <limits>

#define pb push_back
#define REP(i,a) FOR(i,0,a)

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m; 
	cin >> n >> m;
	int x = max(n, m);

	int i = 0; 
	if (m < n) {
		REP(i, x) {
			if (n-- > 0) cout << "B";
			if (m-- > 0) cout << "G";
		}
	}
	else {
		REP(i, x) {
			if (m-- > 0) cout << "G";
			if (n-- > 0) cout << "B";
		}
	}
	return 0;
}