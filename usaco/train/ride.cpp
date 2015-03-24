/*
ID: manan.s1
PROG: ride
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

int lp(string name) {
	int prod = 1;
	for (int i = 0; i < name.length(); i++)
		prod *= toascii(name[i]-'A'+1);
	return prod;
}

int main() {
	freopen("ride.in", "r", stdin); 
	freopen("ride.out", "w", stdout);
	
	string comet, group;
	cin >> comet >> group;

	int clp = lp(comet);
	int glp = lp(group);

	if (clp % 47 == glp % 47) cout << "GO" << endl;
	else cout << "STAY" << endl;

	return 0;
}