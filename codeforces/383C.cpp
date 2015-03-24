//not submitted, code is incomplete

#include <assert.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <ctime>
#include <cctype>
#include <iostream>
#include <fstream>
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

#define pb push_back
#define FOR(i,a,b) for(i=a;i<b;i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

struct node
{
	int num;
	int val;
	vector<node> children;
};

void addchild(node&x, node& y) {
	vector<node> v = x.children;
	v.pb(y);
	x.children = v;
}

void addall(node& start, int val)
{
	if (start.children.empty()) start.val = val;
	else 
	{
		start.val = val;
		for (auto it = start.children.begin(); it != start.children.end(); ++it)
		{
			auto z = *it;
			addall(z, -val);
		}
	}
}

void p383C()
{
	int N, M; 
	cin >> N >> M;

	int i = 0;
	vector<node> nodes;
	//add all nodes to the vector
	REP(i, N)
	{
		int x; 
		cin >> x;
		node v;
		v.val = x;
		nodes.pb(v);
	}
	i = 0;
	REP(i, N - 1)
	{
		int FROM, TO;
		cin >> FROM >> TO;
		node &v = nodes[FROM - 1];
		v.num = FROM;
		node &u = nodes[TO - 1];
		u.num = TO;
		addchild(u, v);
	}
	
	for (auto c : nodes) {
		cout << "Children of node " << c.val << " are: ";
		auto x = c.children;
		for (auto z : x) cout << z.val << " ";
		cout << endl;
	}
	

	i = 0;
	REP(i, M)
	{
		int type;
		cin >> type;
		if (type == 1) {
			int x, val;
			cin >> x >> val;
			node& n = nodes[x - 1];
			addall(n, val);
		}
		for (auto it = nodes.begin(); it != nodes.end(); ++it) {
			node k = *it;
			cout << k.val << " ";
		}
		cout << endl;
	}
}