/*
Submission Details:

mananshah
27A - Next Test
GNU C++0x

Accepted
30 ms
200 KB
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
using namespace std;

typedef long long ll;
typedef set<int> v;

int main()
{
	v x;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		x.insert(t);
	}
	int absmin = 1;
	while (x.find(absmin) != x.end()) absmin++;
	cout << absmin << endl;
	return 0;
}