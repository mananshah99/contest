#include "library.h";
using namespace std;

ll nextTri(ll x)
{ return (x * (x + 1) / 2); }

ll p012()
{
	ll x = 8; //8th triangular number
	while (true)
	{
		ll temp = nextTri(x);
		if (library::nFactors(temp) > 500) return temp;
		x++;
	}
}