#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {
    ll T;
    ll x;
    cin >> T;
    for(ll i=0; i<T; i++){
        cin >> x;
        if(x%2==0) cout << (x/2)*(x/2) << endl;
        else cout << ((x-1)/2)*(x-((x-1)/2)) << endl;
    }
    return 0;
}