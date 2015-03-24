/*
part of the training gate,
not an official problem to sumbit
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
const int fx[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

using namespace std;
vector<vector<bool>> v;
int num = 0;

typedef struct {
	int x, y;
} pos;

void search(pos position, int N) {
	//if we have hit the end(pos.x = N; pos.y = N), increment num and return
	if (position.x == N-1 && position.y == N-1) {
		v[position.x][position.y] = true;
		for (int i = 0; i < v.size(); i++) 
		{
			for (int j = 0; j < v[0].size(); j++) 
			{
				if (v[i][j] == false) {
					cout << i << " " << j << " was false" << endl;
					return;
				}
			}
		}
		
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[0].size(); j++) {
				v[i][j] == false;
			}
		}
		
		++num;
		return;
	}
	else {
		v[position.x][position.y] = true;

		//now iterate through all other possible next locations and call search
		// on those locations. 

		int px = position.x; int py = position.y;
		int nposx, nposy;
		//check left
		for (int i = 0; i < 4 /*fx.length*/; i++) {
			for (int j = 0; j < 2 /*fx[0].length*/; j++) {
				nposx = px +fx[i][0];
				nposy = py +fx[0][j];

				if (nposx >= 0 && nposy >= 0 &&
					nposx < N && nposy < N &&
					v[nposx][nposy] == false) {
					pos p; p.x = nposx; p.y = nposy;
					search(p, N);
				}

				nposx = px +fx[i][0];
				nposy = py -fx[0][j];
				if (nposx >= 0 && nposy >= 0 &&
					nposx < N && nposy < N &&
					v[nposx][nposy] == false) {
					pos p; p.x = nposx; p.y = nposy;
					search(p, N);
				}
				
				nposx = px -fx[i][0];
				nposy = py -fx[0][j];
				if (nposx >= 0 && nposy >= 0 &&
					nposx < N && nposy < N &&
					v[nposx][nposy] == false) {
					pos p; p.x = nposx; p.y = nposy;
					search(p, N);
				}
				
				nposx = px -fx[i][0];
				nposy = py +fx[0][j];
				if (nposx >= 0 && nposy >= 0 &&
					nposx < N && nposy < N &&
					v[nposx][nposy] == false) {
					pos p; p.x = nposx; p.y = nposy;
					search(p, N);
				}
			}
		}
	}
}
int main() {
	//freopen("title.in", "r", stdin);
	//freopen("title.out", "w", stdout);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		v.push_back(vector<bool>(N, false)); // Add an empty row of length N
	}

	pos start; start.x = 0; start.y = 0;
	search(start, N);
	cout << num << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}