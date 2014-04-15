#include "library.h"
#include "template.cpp"

//prints a vector through the use of iterators
void printV(vector<int> v)
{
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
		std::cout << *i << ' ';
}

//gets a long long value from the command line and stores it in the 
//pointer num
void getll(ll* num)
{ scanf_s("%l", num); }

ll* llArray(int size)
{
	//returns a pointer to an array of ll data
	return (ll*)malloc(size*sizeof(ll));
}

char* library::toCharArray(string s)
{
	//typecasting for character array from string
	char *c = const_cast<char*>(s.c_str());
	return c;
}
ll library::parseLong(string s)
{
	//simple use of atoll
	char *c = toCharArray(s);
	ll x = atoll(c);
	return x;
}
bool library::isPalindrome(string s)
{
	if (s == string(s.rbegin(), s.rend())) return true;
	return false;
}

//b is true if letters are capital
int library::ctoi(char c, bool b)
{ 
	if(!b)return c-48; 
	return c - 48 - 16;
}

vector<ll> library::sieve(ull& limit) 
{
	vector<char> sieve(limit, '1');
	vector<ll> retVector;

	for (ll i = 0; i < limit; i++)
		sieve[i] = 1;

	for (ll i = 2; i < limit; i++) {
		if (sieve[i] == 1) {
			for (ll j = i*i; j < limit; j += i)
				sieve[j] = 0;
		}
	}
	for (ll i = 2; i < limit; ++i) {
		if (sieve[i] == 1) retVector.pb(i);
	}
	return retVector;
}

ll library::nFactors(ll x)
{
	ll c = 0;
	if (x <= 1) return 0;
	for (int k = 1; k <= (sqrt(x)); k++)
	{
		if (x%k == 0) c += 2;
		if (k == (sqrt(x))) c--;
	}
	return c;
}

ll library::sFactors(ll x)
{
	ll s = 0;
	if (x <= 1) return 0;
	for (int k = 1; k <= (sqrt(x)); k++)
	{
		if (x%k == 0) {
			s += k;
			s += (x / k);
		}
		if (k == (sqrt(x))) s -= k;
	}
	return s - x;
}