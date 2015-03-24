/*
Submission Details:

mananshah	 
4A - Watermelon	 
GNU C++	

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

typedef long long ll;
typedef std::pair<int, int> pii;

int main()
{
	ll w;
	std::cin >> w;

	if (w<4) { std::cout << "NO"; return 0; }
	for (int i = 0; i < w; i++)
	{
		if (i % 2 == 0 && ((w - i) % 2 == 0)) { std::cout << "YES"; return 0; }
		if (i == w - i || i > w-i) { std::cout << "NO"; return 0; }
	}
}