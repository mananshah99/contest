#include "library.h";

ll p071()
{
	ll N = 0;
	ll D = 1;
	for (ll d = 2; d <= 1000000; d++) {
		int n = (d * 3)/ 7;
		if (d % 7 == 0) n--;
		if (n * D > N * d) {
			N = n;
			D = d;
		}
	}
	return N;
}