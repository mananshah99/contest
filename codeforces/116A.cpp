/*
Submission Details: 

mananshah	 
116A - Tram	 
GNU C++

Accepted	 
62 ms	
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

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

int main()
{
	int n;
	scanf_s("%d", &n);

	int T = 0, MAX = -1;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		T -= a;
		T += b;
		if (T>MAX) MAX = T;
	}
	printf("%d\n", MAX);
	return 0;
}