#include <iostream>
#include <algorithm>
#include "library.h"

using namespace std;

ll p043()
{
	int digits[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	static const unsigned N = sizeof(digits)/sizeof (*digits);
	unsigned long long sum = 0;

	do {
		if ((digits[1] * 100 + digits[2] * 10 + digits[3]) % 2 == 0
			&& (digits[2] * 100 + digits[3] * 10 + digits[4]) % 3 == 0
			&& (digits[3] * 100 + digits[4] * 10 + digits[5]) % 5 == 0
			&& (digits[4] * 100 + digits[5] * 10 + digits[6]) % 7 == 0
			&& (digits[5] * 100 + digits[6] * 10 + digits[7]) % 11 == 0
			&& (digits[6] * 100 + digits[7] * 10 + digits[8]) % 13 == 0
			&& (digits[7] * 100 + digits[8] * 10 + digits[9]) % 17 == 0) {
			ull p = 1;
			for (int i = 0; i < N; i++) {
				sum += digits[N-i-1] * p;
				p *= 10;
			}
		}
	} while (next_permutation(digits, digits+N));

	return sum;
}