/*
Submission Details:

mananshah
12B - Correct Solution?
GNU C++0x

Accepted
60 ms
0 KB
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
#define mp make_pair

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
using namespace std;

int main()
{
	string num; cin >> num;
	string ans; cin >> ans;
	if (ans[0] == '0') {
		if (ans.compare("0") == 0 && num.compare("0") == 0) cout << "OK" << endl;
		else cout << "WRONG_ANSWER" << endl;
		return 0;
	}
	else if (num.compare("0") == 0) {
		if (ans.compare("0") == 0) cout << "OK" << endl;
		else cout << "WRONG_ANSWER" << endl;
		return 0;
	}
	char t[10000];
	memset(t, '-', sizeof(t));
	strcpy(t, num.c_str());
	string nonzeronum(t);
	int erased = 0;
	for (int i = 0; i < num.length(); i++) {
		if (nonzeronum[i] == '0') {
			nonzeronum.erase(i, 1); 
			erased++;
		}
	}
	sort(nonzeronum.begin(), nonzeronum.end());	
	for (int i = 0; i < erased;  i++) {
		nonzeronum.insert(1, "0");
	}

	if (nonzeronum.compare(ans.c_str()) == 0) cout << "OK" << endl;
	else cout << "WRONG_ANSWER" << endl;
	return 0;
}