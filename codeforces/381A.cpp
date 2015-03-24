/*
Submission Details:

mananshah
381A - Sereja and Dima
GNU C++0x

Accepted
15 ms
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

#define pb push_back

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

int main()
{
	int N;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++){
		int x; cin >> x;
		v.pb(x);
	}

	int s = 0, d = 0;
	while (!v.empty())
	{
		int x;
		//add to s score
		if (v[0]>v.at(v.size()-1)) 
			x = v[0];  
		else 
			x = v[v.size() - 1]; 
		s += x;
		
		if (v[0] > v[v.size() - 1]) 
			v.erase(v.begin()); 
		else 
			v.erase(v.end()-1);
		
		//add to d score
		if (v.empty()) break;
		
		if (v[0]>v.at(v.size() - 1)) 
			x = v[0];  
		else 
			x = v[v.size() - 1];
		d += x;
		
		if (v[0] > v[v.size() - 1])
			v.erase(v.begin()); 
		else
			v.erase(v.end() - 1);
	}

	//print solution
	cout << s <<  " " << d << endl;
	return 0;
}
