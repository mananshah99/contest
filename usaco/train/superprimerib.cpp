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

bool isPrime(int num) {
	for (int i = 2; i <= (sqrt(num)); i++) {
		if (num % i == 0) return false;
	}
	return true;
}
int main() {
	//freopen("title.in", "r", stdin);
	//freopen("title.out", "w", stdout);
	int N; cin >> N;
	for (int i = pow(10, N-1); i<(pow(10, N))-1; i++) {
		int x = i;
		while (x > 0) {
			if (!isPrime(x) || x == 1) {
				break;
			}
			x /= 10;
		}
		if(x ==0) cout << i << endl;
	}
	return 0;
}