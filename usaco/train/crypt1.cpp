/*
ID: manan.s1
PROG: crypt1
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
int main() {
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);

	int N; cin >> N;
	vector<int> v;
	for(int i=0; i<N; i++) {
		int T; cin >> T;
		v.push_back(T);
	}

	//THINK OF WAYS TO MAKE THE PROBLEM EASY
	//this case: try all numbers from 100-999 times
	// all numbers from 10-99
	//and check if all partial products are a-ok
	
	int count = 0;
	for (int i = 100; i < 999; i++) {
		for (int j = 10; j < 99; j++) {
			//get all of a, b, c, d, and e
			int a = i / 100;
			int b = (i / 10) % 10;
			int c = i % 10;
			int d = j / 10;
			int e = j % 10;

			//now check if the values are valid

			//step 1: do they all exist in our array?
			if (find(v.begin(), v.end(), a) == v.end() ||
				find(v.begin(), v.end(), b) == v.end() ||
				find(v.begin(), v.end(), c) == v.end() ||
				find(v.begin(), v.end(), d) == v.end() ||
				find(v.begin(), v.end(), e) == v.end()) {
				continue;
			}

			// step 2: get p1 and p2
			int p1 = e * i;
			int p2 = d * i;

			//step 2a) check lengths
			if (to_string(p1).length() > 3 ||
				to_string(p2).length() > 3) {
				continue;
			}
			
			//step 2b) check whether p1 and p2 are valid: 

			string p1s = to_string(p1);
			string p2s = to_string(p2);

			if (find(v.begin(), v.end(), ctoi(p1s[p1s.length()-1])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p1s[p1s.length() - 2])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p1s[p1s.length() - 3])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p1s[0])) == v.end()) {
				continue;
			}

			if (find(v.begin(), v.end(), ctoi(p2s[p2s.length() - 1])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p2s[p2s.length() - 2])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p2s[p2s.length() - 3])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p2s[0])) == v.end()) {
				continue;
			}

			//step 2c) check final product

			int sum = p1 + p2*10;
			string p3s = to_string(sum);
			if (p3s.length() > 4) continue;

			if (find(v.begin(), v.end(), ctoi(p3s[p3s.length() - 1])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p3s[p3s.length() - 2])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p3s[p3s.length() - 3])) == v.end() ||
				find(v.begin(), v.end(), ctoi(p3s[0])) == v.end()) {
				continue;
			}
			
			count++;
		}
	}
	cout << count << endl;
	return 0;
}