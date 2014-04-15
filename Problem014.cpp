#include "library.h"
#include <iterator>

using namespace std;

ll nextCollatz(ll x)
{
	if (x % 2 == 0) return x / 2;
	return (3 * x) + 1;
}

ll p014()
{
	//key is the number, value is the end result
	//check if the set contains the number before each call of next collatz
	map<ll, int> m;
	map<ll, int>::iterator it = m.begin();
	
	ll MAX_NUM = -1;
	ll VAL = 0;
	int count;
	for (ll i = 40; i < 1000000; i++){
		count = 0;
		if (m.find(i) == m.end()) //key not found (e.g. haven't generated the ending collatz number
		{
			ll temp = i;
			while (temp > 1)
			{
				count = count + 1;
				temp = nextCollatz(temp); //next collatz number
				if (m.find(temp) != m.end()) //found the number! we now have the ending position
				{
					ll val = m[temp]; //with i being the key, get the value (# of iterations needed to get to 1)
					count += val; //current count + number of values to get to one
					break;
				}
			}
			if (count > MAX_NUM) {
				MAX_NUM = count; VAL = i;
			}
			m.insert(pair<ll, int>(i, count));

			/*for (it = m.begin(); it != m.end(); ++it)
				cout << "[" << it->first << ", " << it->second << "] ";
			printf("\n");*/
			// printf("%d\n", MAX_NUM);
		}
	}
	return VAL;
}