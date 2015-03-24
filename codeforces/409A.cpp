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

int getpoints(string, string);
const char* rock = "()";
const char* paper = "[]";
const char* scissors = "8<";

int main()
{
	string t1, t2;
	cin >> t1 >> t2;
	
	int t1f = 0;
	int t2f = 0;

	for (int i = 0; i < t1.size(); i+=2) {
		string t1play = t1.substr(i, i+2);
		string t2play = t2.substr(i, i+2);
		int pts = getpoints(t1play, t2play);
		if(pts!=2) pts == 0 ? t1f++ : t2f++;
		pts = 0;
	}

	cout << t1f << t2f << endl;
	if (t1f == t2f) cout << "TIE" << endl;
	else if (t1f>t2f) cout << "TEAM 1 WINS" << endl;
	else cout << "TEAM 2 WINS" << endl;
	return 0;
}

//if x wins, return 0
//if y wins, return 1
//if tie, return 2;
int getpoints(string x, string y)
{
	cout << x << "    " << y << endl;
	if (x.compare(y) == 0) return 2;
	if (x.compare(rock) == 0) return y.compare(scissors) == 0 ? 0 : 1;
	if (x.compare(paper) == 0) return y.compare(rock) == 0 ? 0 : 1;
	if (x.compare(scissors) == 0) return y.compare(paper) == 0 ? 0 : 1;
	else return -1;
}