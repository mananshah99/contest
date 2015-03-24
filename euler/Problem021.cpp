#include "library.h"
using namespace std;

int p021()
{
	//printf("%d\n", library::sFactors(100));
	int result = 0;
	bool nums[10000];
	for (int i = 0; i < 10000; i++) nums[i] = false;

	for (int i = 0; i<10000; i++)
	{
		int temp = library::sFactors(i);
		if (temp < 10000)
		{
			if (library::sFactors(temp) == i)
			{
				if (i != library::sFactors(i)){
					nums[i] = true;
					nums[library::sFactors(i)] = true;
				}
			}
		}
	}
	for (int i = 0; i < 10000; i++){
		if (nums[i] == true) {
			result += i;
		}
	}
	return result;
}