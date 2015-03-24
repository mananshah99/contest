#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#endif

/*
ID: manan.s1
PROG: namenum
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

#define mp make_pair
using namespace std;

map<char, int> kv;
multimap<string, string> dict;

void s_kv();

int main() {
	freopen("namenum.in", "r", stdin);
	ifstream dictionary("dict.txt");
	freopen("namenum.out", "w", stdout);
	string brand; cin >> brand;
	
	s_kv();
	
	string t;
	while (!dictionary.eof()) {
		dictionary >> t;
		string f;
		for (int i = 0; i < t.length(); i++) {
			if (t[i] == 'Z' || t[i] == 'Q') continue;
			char c = kv.at(t[i]);
			f += c;
		}
		dict.insert(mp	(f, t));
	}
	
	vector<string> values;
	auto eq = dict.equal_range(brand);
	for (multimap<string, string>::iterator it = eq.first; it != eq.second; ++it) {
		values.push_back((*it).second);
	}

	if (values.size() == 0) cout << "NONE" << endl;
	else cout << values << endl;
	return 0;
}

void s_kv() {

	kv.insert(mp('A', '2'));
	kv.insert(mp('B', '2'));
	kv.insert(mp('C', '2'));
	kv.insert(mp('D', '3'));
	kv.insert(mp('E', '3'));
	kv.insert(mp('F', '3'));
	kv.insert(mp('G', '4'));
	kv.insert(mp('H', '4'));
	kv.insert(mp('I', '4'));
	kv.insert(mp('J', '5'));
	kv.insert(mp('K', '5'));
	kv.insert(mp('L', '5'));
	kv.insert(mp('M', '6'));
	kv.insert(mp('N', '6'));
	kv.insert(mp('O', '6'));
	kv.insert(mp('P', '7'));
	kv.insert(mp('R', '7'));
	kv.insert(mp('S', '7'));
	kv.insert(mp('T', '8'));
	kv.insert(mp('U', '8'));
	kv.insert(mp('V', '8'));
	kv.insert(mp('W', '9'));
	kv.insert(mp('X', '9'));
	kv.insert(mp('Y', '9'));
}