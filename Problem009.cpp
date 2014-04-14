#include "library.h";
using namespace std;

bool isPyth(ll x, ll y, ll z)
{ return ((x*x) + (y*y)) == (z*z); }

ll p009()
{
	ll a, b, c;
	int m = 1;
	while (true){
		for (int n = 0; n < m; n++){
			a = ((m*m) - (n*n));
			b = 2*m*n;
			c = ((m*m) + (n*n));
			if (isPyth(a, b, c)&&((a+b+c)==1000)){
				ll x = a*b*c;
				return x;
			}
		}
		m++;
	}
	
}
