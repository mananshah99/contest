//generic includes
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
#include <limits.h>

//accessor/utility macros
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832795
#define ALL(x) x.begin(), x.end()
#define F first
#define S second
#define m0(x) memset(x,0,sizeof(x))
#define m1(x) memset(x,-1,sizeof(x))
#define pw(x) (1ull<<(x))
#define debug(a) cout << #a << ": " << (a) << endl;
#define SZ(x) ((int)((x).size()))
#define INF 0x7fffffff
#define ctoi(c) (c-'0')
#define mod(a, b) ((a % b) + ((a % b) < 0 ? b : 0))

//traversal macros
#define foreach(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); ++ i)
#define tr(container , it) for(typeof(container.begin()) it=container.begin(); it!=container.end() ; ++it)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define REP(i,a) FOR(i,0,a)

//additional useful macros
#define SWAP(a, b) ((a)^=(b),(b)^=(a),(a)^=(b))
#define LENGTH(x) (sizeof(x) / sizeof(x[0])) //e.g. array length
#define debug(a) cout << #a << ": " << (a) << endl;

//directions
const int fx[4][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
const int fxx[8][2] = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 }, { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 } };

//operators
template <typename T1, typename T2>
inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
{
	return os << "(" << p.first << ", " << p.second << ")";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os, const std::vector<T>& v)
{
	bool first = true;
	os << "[";
	for (unsigned int i = 0; i < v.size(); i++)
	{
		if (!first)
			os << ", ";
		os << v[i];
		first = false;
	}
	return os << "]";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os, const std::set<T>& v)
{
	bool first = true;
	os << "[";
	for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
	{
		if (!first)
			os << ", ";
		os << *ii;
		first = false;
	}
	return os << "]";
}

template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os, const std::map<T1, T2>& v)
{
	bool first = true;
	os << "[";
	for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
	{
		if (!first)
			os << ", ";
		os << *ii;
		first = false;
	}
	return os << "]";
}

inline char to_char(int c){
	if (c >= 10)
		return c - 10 + 'A';
	return c + '0';
}

using namespace std;
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;

int A, B, N;
int MIN_COST = 100000;
void updatemin(vector<int> route, int cost) {
    bool seenA = false;
    bool seenB = false;
    for(int i=0; i<route.size(); i++) {
        if(route[i] == A) {
            seenA = true;
        }
        if(route[i] == B && seenA == false) return;
        if(route[i] == B && seenA == true) {
            MIN_COST = min(MIN_COST, cost);
        }
    }
}
int main() {
	freopen("cowroute.in", "r", stdin);
	freopen("cowroute.out", "w", stdout);
    cin >> A >> B >> N;
    int currcost;
    int howlong;
    for(int i=0; i<N; i++) {
        vector<int> route;
        //line 1
        cin >> currcost >> howlong;
        //line 2, the route
        for(int i=0; i<howlong; i++) {
            int element;
            cin >> element;
            route.push_back(element);
        }
        // cout << route << endl;
        updatemin(route, currcost);
    }
    if(MIN_COST == 100000) MIN_COST = -1;
    cout << MIN_COST << endl;
}
