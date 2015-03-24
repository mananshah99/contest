/*
ID: manan.s1
PROG: friday
LANG: C++11
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

int main(){
	freopen("friday.in", "r", stdin);
	freopen("friday.out", "w", stdout);

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int times[7]; 

	for (int i = 0; i < 7; i++) 
		times[i] = 0;

	int N; cin >> N;
	
	int cpos = 0;
	for (int i = 1900; i < 1900 + N; i++) {

		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			days[1] = 29; //set feburary

		for (int month = 0; month < 12; month++) {
			int d = (cpos + 13) % 7;
			times[d] ++;
			cpos = days[month] + d - 13;
		}

		days[1] = 28;
	}
	cout << times[6] << " " << times[0] << " " << times[1] << " " << times[2] << " " << times[3] << " " << times[4] << " " << times[5] << endl;
	return 0;
}