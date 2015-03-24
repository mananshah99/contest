/*
Submission Details:

mananshah
344A - Magnets
GNU C++0x

Accepted
124 ms
600 KB
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
typedef std::pair<int, int> pii;

int main()
{
	int n; cin >> n;
	string s = "";
	for (int i = 0; i < n; i++) {
		string t; cin >> t;
		s += t;
	}
	int f = 1;
	for (int i = 0; i < s.length() - 1; i++) if (s[i] == s[i+1]) f++;
	cout << f << endl;
	return 0;
}