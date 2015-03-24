/*
ID: manan.s1
PROG: transform
LANG: C++
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

using namespace std;
const static int MAXN = 10;
char before[MAXN][MAXN];
char after[MAXN][MAXN];

int N;

bool compare()
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (before[i][j] != after[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void rotate()
{
	char t[MAXN][MAXN];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			t[j][N - i - 1] = before[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			before[i][j] = t[i][j];
}

void reflect()
{
	char t[MAXN][MAXN];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			t[i][N - j - 1] = before[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			before[i][j] = t[i][j];
}

int transform()
{
	freopen("transform.in", "r", stdin);
	freopen("transform.out", "w", stdout);
	
	cin >> N;
	int ans = 7; 

	for (int i = 0; i < N; i++)	
		cin >> before[i];
	for (int i = 0; i < N; i++)	
		cin >> after[i];
	
	if (compare()) {
		ans = min(ans, 6);
	}

	rotate();

	if (compare()) {
		ans = min(ans, 1);
	}

	rotate();

	if (compare()) {
		ans = min(ans, 2);
	}

	rotate();

	if (compare()) {
		ans = min(ans, 3);
	}

	rotate();
	reflect();

	if (compare()) {
		ans = min(ans, 4);
	}

	for (int i = 1; i <= 3; i++) {
		rotate();
		if (compare()) {
			ans = min(ans, 5);
		}
	}

	cout << ans << endl;
	return 0;
}