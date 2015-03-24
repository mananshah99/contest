/*
Submission Details:

mananshah
3A - Shortest path of the king
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
#define PI 3.1415926535897932384626433832795
#define ALL(x) x.begin(), x.end()
#define F first
#define S second
#define m0(x) memset(x,0,sizeof(x))
#define m1(x) memset(x,-1,sizeof(x))
#define pw(x) (1ull<<(x))
#define bytes(x) sizeof(x);
#define debug(a) cout << #a << ": " << (a) << endl;
#define foreach(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); ++ i)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define REP(i,a) FOR(i,0,a)
#define XORSWAP(a, b) ((a)^=(b),(b)^=(a),(a)^=(b))

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	//distance away
	int n = max(abs(s[0] - t[0]), abs(s[1] - t[1]));
	cout << n << endl;

	while (s != t) {

		//left or right? 
		if (s.at(0) > t.at(0)) {
			cout << "L";
			s[0] -= 1;
		}
		else if (s.at(0) < t.at(0)) {
			cout << "R";
			s[0] += 1;
		}

		//up or down?
		if (s.at(1) > t.at(1)) {
			cout << "D";
			s[1] -= 1;
		}
		else if (s.at(1) < t.at(1)) {
			cout << "U";
			s[1] += 1;
		}
		cout << endl;
	}
	return 0;
}