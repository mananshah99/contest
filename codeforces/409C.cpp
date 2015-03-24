/*
Submission Details:

mananshah
409C - Magnum Opus
GNU C++0x

Accepted
31 ms
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

int main()
{
	int af, ar, ama, mini, vit; 
	cin >> af >> ar >> ama >> mini >> vit;
	vector <int> v;
	v.pb(af);
	v.pb(ar);
	v.pb(ama/2);
	v.pb(mini/7);
	v.pb(vit/4);
	auto min_it = std::min_element(v.begin(), v.end());
	int x = *min_it;
	cout << x << endl;
	return 0;
}