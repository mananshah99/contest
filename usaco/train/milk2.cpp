/*
ID: manan.s1
PROG: milk2
LANG: C++
*/

//generic includes
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
struct farmer {
	int start_time;
	int end_time;
};

bool comp(const farmer& a, const farmer& b) {
	return a.start_time < b.start_time;
}

int time_idle(vector<farmer> &v);
int one_cow(vector<farmer> &v);

int main() {
	freopen("milk2.in", "r", stdin);
	freopen("milk2.out", "w", stdout);

	vector<farmer> farmers;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		farmer t;
		cin >> t.start_time >> t.end_time;
		farmers.pb(t);
	}
	sort(farmers.begin(), farmers.end(), comp);

	int start = farmers[0].start_time;
	int end = farmers[0].end_time;

	int milkTime = 0, idleTime = 0;
	for (int i = 0; i < farmers.size(); i++) {

		//maximum yielding end 
		if (farmers[i].end_time >= end && farmers[i].start_time <= end) {
			end = farmers[i].end_time;
		}

		if (farmers[i].start_time > end) {
			milkTime = max(end - start, milkTime);
			idleTime = max(farmers[i].start_time - end, idleTime);
			start = farmers[i].start_time;
			end = farmers[i].end_time;
		}
	}

	milkTime = max(end - start, milkTime);
	cout << milkTime << " " << idleTime << endl;
	return 0;
}