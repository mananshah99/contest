/*
ID: manan.s1
PROG: combo
LANG: C++11
*/

#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int N;
int farmer[3] = {0};
int master[3] = {0};

//NEGATIVE MODS DONT WORK YOU HAVE TO ADD THE BASE IF ITS NEGATIVE
bool in_range_farmer(int val, int pos) {
    return ( ( ((val + 2) % N + ((val + 2) % N < 0 ? N : 0)) == ( farmer[pos] % N) ) ||
             ( ((val + 1) % N + ((val + 1) % N < 0 ? N : 0)) == ( farmer[pos] % N) ) ||
             ( (val % N + ((val) % N < 0 ? N : 0))       == ( farmer[pos] % N) ) ||
             ( ((val - 1) % N + ((val - 1) % N < 0 ? N : 0)) == ( farmer[pos] % N) ) ||
             ( ((val - 2) % N + ((val - 2) % N < 0 ? N : 0)) == ( farmer[pos] % N) )
           );
}

bool in_range_master(int val, int pos) {
    return ( ( ((val + 2) % N + ((val + 2) % N < 0 ? N : 0)) == ( master[pos] % N) ) ||
             ( ((val + 1) % N + ((val + 1) % N < 0 ? N : 0)) == ( master[pos] % N) ) ||
             ( (val % N + ((val) % N < 0 ? N : 0))       == ( master[pos] % N) ) ||
             ( ((val - 1) % N + ((val - 1) % N < 0 ? N : 0)) == ( master[pos] % N) ) ||
             ( ((val - 2) % N + ((val - 2) % N < 0 ? N : 0)) == ( master[pos] % N) )
           );
}

bool ok(int a, int b, int c) {
    // The lock has a small tolerance for error, however,
    // so it will open even if the numbers on the dials are
    // each within at most 2 positions of a valid combination.
    // use MOD N
    if(in_range_farmer(a, 0) && in_range_farmer(b, 1) && in_range_farmer(c, 2))
        return true;
    if(in_range_master(a, 0) && in_range_master(b, 1) && in_range_master(c, 2))
        return true;

    return false;
}

int main() {
    freopen("combo.in", "r", stdin);
    freopen("combo.out", "w", stdout);

    cin >> N;
    for(int i=0; i<3; i++) cin >> farmer[i];
    for(int i=0; i<3; i++) cin >> master[i];

    int ct = 0;
    //generate all possible combos (i, j, k)
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            for(int k=1; k<=N; k++) {
                if(ok(i, j, k)) {
                    //cout << i << " " << j << " " << k << endl;
                    ct++;
                }
            }
        }
    }
    cout << ct << endl;
}
