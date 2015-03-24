/*
Submission Details:

mananshah
9A - Dice Roll
GNU C++0x

Accepted
30 ms
0 KB
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

int main()
{
	int u, v;
	cin >> u >> v;
	int x = max(u, v);
	//probabilities for each case
	char* p[7] = { "", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6" };
	cout << p[x] << endl;
	return 0;
}