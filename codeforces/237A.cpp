/*
Submission Details:

mananshah
237A - Free Cash
GNU C++0x

Accepted
186 ms
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

int main()
{
	int N; cin >> N;
	int curr = 1, x = 1, ch = -10, cm = -10, h, m;
	while (N--) {
		cin >> h >> m;
		if (h == ch && m == cm) {
			curr++; 
			x = max(x, curr); 
		}
		else { 
			ch = h; 
			cm = m;
			curr = 1; 
		}
	}
	cout << x << endl;
	return 0;
}