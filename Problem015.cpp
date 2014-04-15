#include "library.h";
using namespace std;

ll p015()
{
	// n choose k algorithm 
	// for any grid, n is the number of rows + number of columns
	// and k is the number of rows
	//same implementation in java and haskell

	ll n = 40;
	ll k = 20;

	if (k > (n - k))
		k = n - k;

	ll c = 1;
	for (ll i = 0; i < k; i++) {
		c *= n - i;
		c /= i + 1;
	}
	return c;
}