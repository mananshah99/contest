/*
ID: manan.s1
PROG: skidesign
LANG: C++11
*/

/*
strategy
========
brute force search.
line 1: N hills
lines 2..N: heights of each hill

5
20
4
1
24
21

output: difference is at most 17 units (amount of money)

main concept learned
====================
brute force literally means try all possibilities
look at the constraints of the problem and iterate over ALL OF THEM
don't optimize or look for a smart way
don't worry about time constraints
this solution looks at ALL mins and maxes possible (from 0 min 17 max to 83 min 100 max)
  and iterates through them, altering the hills to fit it. keep track of a minimum cost
  that is updated each interval.
*/
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int N;
const int MAXN = 10000;
int hills[MAXN];

int main() {
    freopen("skidesign.in", "r", stdin);
    freopen("skidesign.out", "w", stdout);
    cin >> N;

    int cost = 1e7; //large enough

    for(int i=0; i<N; i++) {
        cin >> hills[i];
    }

    //(0, 17) to (83, 100)
    //from 0 to 83: all possible hill intervals
    for(int i = 0; i < 83; i++) {
        int curr = 0;
        int max_ch = i + 17;
        for(int j = 0; j < N; j++) {
            //too big, make it smaller
            if(hills[j] > max_ch) {
                curr += ((hills[j]-max_ch)*(hills[j]-max_ch));
            }
            //too small, make it bigger
            else if (hills[j] < i) {
                curr += ((i-hills[j])*(i-hills[j]));
            }
        }
        cost = min(curr, cost);
    }
    cout << cost << endl;
    return 0;
}
