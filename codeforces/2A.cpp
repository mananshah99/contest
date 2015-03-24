/*
Submission Details:

mananshah
2A - Winner
GNU C++0x

Accepted
30ms
200 KB
*/

#include <assert.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <ctime>
#include <cctype>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>

typedef long long ll;
typedef std::pair<std::string, int> psi;

int main()
{
	int n;
	std::cin >> n;

	std::vector<psi> r(n);
	std::map<std::string, int> p2sc;
	
	//scan into the vector
	for (int i = 0; i < n; ++i)
	{
		std::string f;
		std::cin >> f;
		int v;
		std::cin >> v;

		r[i].first = f;
		r[i].second = v;

		p2sc[f] += v;
	}

	//set of winners
	std::set<std::string> winners;
	int m = -1;

	//iterate through player 2 scores
	for (auto it = p2sc.begin(); it != p2sc.end(); ++it) {
		if (it->second > m) {
			m = it->second;
			winners.clear();
			winners.insert(it->first);
		}
		else if (it->second == m) winners.insert(it->first);
	}

	//uh-oh
	if (winners.size() > 1) {
		p2sc.clear();
		for (auto it = r.begin(); it != r.end(); ++it) {

			std::string x = it->first;
			p2sc[x] += it->second;

			if (p2sc[x] >= m && winners.count(x) == 1) {
				winners.clear();
				winners.insert(it->first);
				break;
			}
		}
	}

	std::cout << *winners.begin() << std::endl;
	return 0;
}