/*
Submission Details:

mananshah
402C - Searching for a Graph
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

int main() {
	int t, n, p;
	cin >> t;
	while (t--) 
	{
		int c = 0;
		cin >> n >> p;
		for (int i = 1; i <= n; i++) 
		{
			if (c == 2 * n + p) break;
			for (int j = i + 1; j <= n; j++) 
			{
				cout << i << " " << j << endl;
				c++;
				if (c == 2 * n + p) break;
			}
		}
	}
}