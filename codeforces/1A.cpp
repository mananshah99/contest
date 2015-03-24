/*
Submission Details:

mananshah	 
1A - Theatre Square	 
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
	ll n, m, a;

	std::cin >> n;
	std::cin >> m;
	std::cin >> a;

	ll T1 = n / a;  
	ll T2 = m / a;  
	
	if (n%a != 0) T1++;   
	if (m%a != 0) T2++;  

	ll f = T1*T2;
	std::cout << f;
	return 0;
}