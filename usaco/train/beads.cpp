/*
ID: manan.s1
PROG: beads
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
#include <complex>

using namespace std;
#define W 'w'

int main() {
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);
	
	int N; string beads;
	cin >> N >> beads;

	int MAX = 0;

	for (int i = 0; i < N; i++) { 
		char color = W;
		int curr = 0;
		bool isswitch = false;

		for (int j = 0; j < N; j++) {
		    char bead = beads[(i + j) % N];  //get the bead you're looking at
			if (bead != W) { 
				//is ok if the color's white
				if (color == W) 
					color = bead;
				//if the color's not white
				else if (color != bead) {
					//if this is a 2nd switch, exit
					if (isswitch) break;
					//otherwise, switch the color and mark it
					else {
						color = bead;
						isswitch = true;
					}
				}
			}
			curr++;
		}
		MAX = max(MAX, curr);
	}

	cout << MAX << endl;
	return 0;
}