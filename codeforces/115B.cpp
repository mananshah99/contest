/*
Submission Details:

mananshah
115B - Lawnmower 
GNU C++0x

Accepted
15 ms
200 KB
*/

#define _CRT_SECURE_NO_WARNINGS
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

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;

const char W = 'W';
char lawn[150][150];

int n, m;
int moves = 0;
int prevlevel = 0;

void read();
int getnext(int, int);

int main() 
{
	read();
	int p = 0;
	for (int i = 0; i < n; i++) {
		p = getnext(i,p);
		moves++;
	}
	moves -= (n - prevlevel);
	cout << moves << endl;
	return 0;
}

void read()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s; 
		cin >> s;
		for (int j = 0; j < m; j++) lawn[i][j] = s[j];
	}
}

int getnext(int r, int c)
{
	if (lawn[r][c] == W) prevlevel = r;

	//even row
	if (r % 2 == 0)
	{
		//traverse columns
		for (int i = c + 1; i < m; i++) {
			if (lawn[r][i] == W || lawn[r + 1][i] == W) {
				//add distance to next 'W'
				moves += (i - c);
				//set position
				c = i;
				if (lawn[r][i] == W) prevlevel = r;
				else prevlevel = r + 1;
			}
		}
	}
	//odd row
	else 
	{
		//traverse columns
		for (int i = c - 1; i >= 0; i--) {
			if (lawn[r][i] == W || lawn[r + 1][i] == W) {
				//add distance to next 'W'
				moves += (c - i);
				//set position
				c = i;
				if (lawn[r][i] == W) prevlevel = r;
				else prevlevel = r + 1;
			}
		}
	}
	//return new x position on grid
	return c;
}