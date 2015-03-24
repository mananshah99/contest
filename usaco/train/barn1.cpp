/*
ID: manan.s1
PROG: barn1
LANG: C++11
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

int main() {
	freopen("barn1.in", "r", stdin);
	freopen("barn1.out", "w", stdout);
	//**note that pb is a macro #defined as push_back
	/*input*/
	int M, S, C;
	cin >> M >> S >> C;

	vector<int> stalls;
	for (int i = 0; i < C; i++) {
		int t; cin >> t;
		stalls.pb(t);
	}

	/*sort, this isn't guarunteed in the text of the problem*/
	sort(stalls.begin(), stalls.end());

	/*the continuous length of the gaps*/
	vector<int> gaps;
	for (int i = 0; i < C - 1; i++) 
		gaps.pb(stalls[i + 1] - stalls[i] - 1); 


	/*find the largest gaps through reverse sorting*/
	sort(gaps.rbegin(), gaps.rend()); //get the largest at the front of the vector

	int f = 0;
    int TOT = stalls[stalls.size()-1] - stalls[0] + 1;
	
	//largest 3 gaps in the example
	if (M > gaps.size()) M = gaps.size()+1;

	for (int i = 0; i < M - 1; i++)
		f += gaps[i];
	
	/*end result*/
	cout << (TOT - f) << endl;
	return 0;
}