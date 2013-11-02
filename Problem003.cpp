#include <iostream>
using namespace std;

//divides out all possible divisors from the number
//when the number is equal to the divisor, we have the greatest prime factor

int main()
{
	long long number = 600851475143LL;
	for (long long divisor = 3; divisor != number; divisor += 2)
	{
		if(number % divisor == 0)
			number /= divisor;
	}
	cout << number << endl;
}