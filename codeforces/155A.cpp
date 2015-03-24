/*
Submission Details:

mananshah
155A - I love \%username\%
GNU C++0x

Accepted
30 ms
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

#define pb push_back

using namespace std;

int main()
{
	int N; cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		v.pb(x);
	}
	int az = 0;
	//min and max
	int pmin = v[0];
	int pmax = v[0];

	for (auto it = ++v.begin(); it != v.end(); ++it) {
		int u = *it;
		if (u < pmin) {
			az++;
			pmin = u;
		}
		else if (u>pmax) {
			az++;
			pmax = u;
		}
	}
	cout << az << endl;
	return 0;
}