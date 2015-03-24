/*
Submission Details:

mananshah
376B - I.O.U
GNU C++0x

Accepted
31 ms
0 KB
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

int t[101];
int g[101];

int main() {
	int N, M, tot = 0;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		g[a] += c; t[b] += c;
	}

	for (int i = 1; i <= N; i++) {
		int MIN = min(g[i], t[i]);
		g[i] -= MIN;
		t[i] -= MIN;
		tot += g[i];
	}

	cout << tot << endl;
	return 0;
}