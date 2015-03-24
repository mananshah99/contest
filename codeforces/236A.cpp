/*
Submission Details:

mananshah
236A - Boy or Girl
GNU C++0x

Accepted
60 ms
100 KB
*/

#include <iostream>
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

using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

int main()
{
	set<char> v;
	string s; 
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) v.insert(s[i]);
	if (v.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}	