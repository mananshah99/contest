/*
ID: manan.s1
PROG: palsquare
LANG: C++11
*/

//
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
int B;

string to_base(int v, int radix)
{
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

int main() {
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	cin >> B;
	
	if (B == 10) { //easy case, don't waste time or memory 
		for (int N = 1; N <= 300; ++N) {
			string t = to_string(N*N);
			if (t.compare(string(t.rbegin(), t.rend())) == 0) //palindrome
				cout << N << " " << t << endl;
		}
	}
	else {
		for (int N = 1; N <= 300; ++N) {
			string init = to_base(N, B);
			string fin = to_base(N*N, B);
			if (fin.compare(string(fin.rbegin(), fin.rend())) == 0) //palindrome
				cout << init << " " << fin << endl;
		}
	}
	return 0;
}

