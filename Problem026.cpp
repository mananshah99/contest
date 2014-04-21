#include "library.h";
using namespace std;

int recur(int);

int main() {
	int max = 0;
	int absmax;
	ull N = 1000;
	vector <ll> sieve = library::sieve(N);
	for (int i = 1; i < 1000; i++) {
		int len = recur(i);
		if (len > max) {
			absmax = i;
			max = len;
		}
	}
	return absmax;
}

int recur(int n) {
	int i = 0;
	int curr = 10;
	set <int> s;
	while (1) {
		while (curr < n) curr *= 10;
		curr = (curr % n) * 10;
		if (s.count(curr) || curr == 0) break;
		s.insert(curr);
		++i;
	}
	return i;
}