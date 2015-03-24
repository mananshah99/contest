/*
Submission Details:

mananshah
405A - Gravity Flip
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
#include <limits>

#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
using namespace std;

int main()
{
	int N; 
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << " "; 
	}
	cout << endl;
	return 0;
}