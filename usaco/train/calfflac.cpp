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

/*
int main() {
	//freopen("title.in", "r", stdin);
	//freopen("title.out", "w", stdout);

	string s; cin >> s;
	string best = "";
	int longest = 1;
	
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << "iterator -> " << *it << endl;
		auto start = it;
		auto end = it;

		int size;
		if (isalpha(*it)) size = 1;
		else size = 0;

		while (true) {
			bool done = false;
			//go as far back as possible with punctuation
			do {
				if (start == s.begin()) break;
				--start;
				done = done || (start <= s.begin());
			} while (!done && !isalpha(*start));

			//go as far forward as possible without punctuation
			do {
				if (end == s.end()) break;
				++end;
				done = done || (end >= s.end());
			} while (!done && !isalpha(*end));
			
			//if we're done or the resulting string isn't a palindrome, break
			if(!done) cout << "two characters (this is important) : " << *start << " " << *end  << endl;
			if (done || tolower(*start) != tolower(*end)) break;
			//add the two (alphabet) characters to the size
			size += 2;

			if (size > longest) {
				//add characters to the string
				best = string(start, end + 1);
				cout << "changed best. It's now : " << best << endl;
				longest = size;
			}
		}
	}
	cout << longest << endl << best << endl;
	pause();
	return 0;
}*/

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