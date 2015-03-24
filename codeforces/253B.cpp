/*
Submission Details:

mananshah
253B - Physics Practical
GNU C++0x

Accepted
124 ms
1200 KB
*/

#define _CRT_SECURE_NO_WARNINGS

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

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii; 
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n; 
	cin >> n;
	vector<int> measurements;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		measurements.pb(x);
	}

	int MIN = numeric_limits<int>::max();
	std::sort(measurements.begin(), measurements.end());

	for (int i = 0; i<n; i++) 
	{
		int pos = 0;
		int curr = n - 1;
		for (int j = i + 1; j <= curr;)
		{
			//binary search 
			int mid = (j + curr) / 2;
			if (measurements[mid] > measurements[i] * 2) curr = mid - 1;
			else if (measurements[mid] <= measurements[i] * 2) 
			{
				if (mid > pos) pos = mid;
				j = mid + 1;
			}
		}
		int t = n - (pos - i + 1);
		if (t < MIN) MIN = t;
	}
	cout << MIN << endl;
	return 0;
}