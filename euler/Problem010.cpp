#include "library.h";
using namespace std;

ll p010()
{
	ull limit = 2000000;
	ll sum = 0;
	vector<ll> primes = library::sieve(limit);

	for (ll index = 0; index<primes.size(); ++index){
		ll x = primes.at(index);
		sum += x;
	}
	return sum;
}