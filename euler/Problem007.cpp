#include "template.cpp";
#include "library.h";

using namespace std;
ull p007()
{
	ull val = 10000000;
	vector<ll> v = library::sieve(val);
	return v[10000];
}