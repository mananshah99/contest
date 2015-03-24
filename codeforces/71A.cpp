/*
Submission Details:

mananshah
71A - Way Too Long Words
GNU C++0x

Accepted
30 ms
100 KB
*/

#include <iostream>
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

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() <= 10) cout << s << endl;
		else cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
	}
	return 0;
}