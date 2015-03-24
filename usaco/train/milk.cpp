/*
ID: manan.s1
PROG: milk
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
typedef pair<int, int> pii;

int main() {
	freopen("milk.in", "r", stdin);
	freopen("milk.out", "w", stdout);

	int N, M;
	cin >> N >> M;
	multimap<int, int> m;
	int Pi, Ai;
	for (int i = 0; i < M; i++) {
		cin >> Pi >> Ai;
		m.insert(pii(Pi, Ai));
	}

	int cost = 0;
	for (auto it = m.begin(); it != m.end() && N > 0; it++) {
		int price = (*it).F;
		int num = (*it).S;
		if (num >= N) num = N;
		cost += (num*price);
		N -= num;
	}
	cout << cost << endl;
	return 0;
}