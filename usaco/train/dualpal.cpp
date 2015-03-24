/*
ID: manan.s1
PROG: dualpal
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

void trim(std::string& src, char ch)
{
	auto pos = src.find_first_not_of(ch, 0);
	if (pos > 0) src.erase(0, pos);
}

string tobase(int v, int radix)
{
	if (radix == 10) {
		return to_string(v);
	}
	const size_t MAX_SIZE = 66;

	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char buffer[MAX_SIZE];

	if (!v) return "0";

	buffer[65] = '\0';
	int i = 65;

	if (v > 0) {
		while (v) {
			buffer[--i] = digits[v % radix];
			v /= radix;
		}
	}
	else {
		while (v) {
			buffer[--i] = digits[-(v % radix)];
			v /= radix;
		}
		buffer[--i] = '-';
	}

	return buffer + i;
}

bool two_bases(int x) {
	int n = 0;
	for (int b = 2; b <= 10; b++){
		if (n >= 2) return true;
		string s = tobase(x, b);
		trim(s, '0');
		if (s.compare(string(s.rbegin(), s.rend())) == 0) {//palindrome
			n++;
		}
	}
	if (n >= 2) return true;
	return false;
}

int main() {
	freopen("dualpal.in", "r", stdin);
	freopen("dualpal.out", "w", stdout);
	int N, S;
	cin >> N >> S;
	int c = S + 1;
	int t = 0;
	while (t < N) {
		if (two_bases(c)) {
			cout << c << endl;
			t++;
		}
		c++;
	}
	return 0;
}