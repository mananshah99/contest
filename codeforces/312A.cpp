/*
Submission Details:

mananshah
312A - Whose sentence is it?
GNU C++0x

Accepted
30 ms
100 KB
*/

#include <assert.h>
#include <cstdio>
#include <cstdlib>
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
#include <regex>
#include <string> 

typedef long long ll;
using namespace std;

bool miao(string s) {
	string x;
	if (s.size() < 5) return false;
	x += s[0]; x+= s[1]; x += s[2]; x += s[3]; x += s[4];
	if (x == "miao.") return true; 
	else return false;
}
bool lala(string s) {
	string x;
	int sz = s.size();
	if (sz < 5) return false;
	x += s[sz - 5]; x+=	s[sz - 4]; x += s[sz - 3]; x += s[sz - 2]; x += s[sz - 1];
	if (x == "lala.") return true;
	else return false;
}
int main()
{
	string n;
	int N;
	getline(cin, n);
	//codeforces doesn't accept stoi
	N = atoi(n.c_str());
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		if (!miao(s) && !lala(s) || miao(s) && lala(s)) cout << "OMG>.< I don't know!" << endl;
		else if (miao(s)) cout << "Rainbow's" << endl;
		else cout << "Freda's" << endl;
	}
	return 0;
}