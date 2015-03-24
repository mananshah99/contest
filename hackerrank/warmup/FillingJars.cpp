#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {
    ll N;
    ll M;
    cin >> N >> M;
    
    ll jar1;
    ll jar2;
    ll total = 0;
    ll temp;
    for(ll i=0; i<M; i++){
  	cin >> jar1 >> jar2 >> temp;
	temp *=(abs(jar1-jar2) +1);
        total += temp;
    }
    ll final = total/N;
    int f = (int)final;
    cout << f << endl;
    return 0;
}
