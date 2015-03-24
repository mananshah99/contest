/*
ID: manan.s1
PROG: gift1
LANG: C++11
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

using namespace std;

int main(){
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	
	int NP; cin >> NP;
	map<string, int> people;
	vector<string> fin; 
	for (int i = 0; i < NP; i++) {
		string x; cin >> x;
		people.insert(pair<string, int>(x, 0));
		fin.pb(x);
	}
	
	for (int i = 0; i < NP; i++) {
		string n;
		int npeople = 0;
		int money = 0;
		cin >> n >> money >> npeople;
		int rdr = 0;
		if (npeople != 0) rdr = money % npeople;

		//get current amount of giver
		int camt = people.find(n)->second;
		//how much given away
		camt -= (money - rdr);
		people.erase(n);
		people.insert(pair<string, int>(n, camt));
		
		for (int j = 0; j < npeople; j++) {
			//person to give to
			string person; cin >> person;
			int curr = people.find(person)->second;
			curr += (money / npeople);
			people.erase(person);
			people.insert(pair<string, int>(person, curr));
		}
	}
	for (int i = 0; i < fin.size(); i++) {
		string nm = fin[i];
		cout << nm << " " << people.find(nm)->second << endl;
	}
	return 0;
}