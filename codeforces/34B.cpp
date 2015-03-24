/*
Submission Details:

mananshah	 
34B - Sale	
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
	int N, M, arr[100];
	std::cin >> N >> M;

	for (int i = 0; i < N; ++i)
		std::cin >> arr[i];

	std::sort(arr, arr + N);

	int sum = 0;
	for (int i=0; i < M; i++)
	{
		if (arr[i] >= 0) break;
		else sum += arr[i];
	}

	std::cout << -sum;
	return 0;
}