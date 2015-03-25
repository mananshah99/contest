#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#endif

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
	string s;
	cin >> s;
	string best = "";
	int MAX = -1;

	for (int i = 1; i < s.length(); i++) {
		int curr = i;
		int inc = 1;
		int curr_len = 1;

		while (curr - inc >= 0 && curr + inc < s.length()) {
			char before = s[curr - inc];
			char after = s[curr + inc];

			curr_len += 2;
			cout << before << " " << after << " " << curr_len << endl;
			if (before != after) {
				if (curr_len > MAX) {
					best = s.substr(curr - inc + 1, curr + inc + 1);
					MAX = curr_len;
					break;
				}
				else break;
			}
			inc++;
		}
	}
	cout << MAX << " " << best;
	return 0;
}
