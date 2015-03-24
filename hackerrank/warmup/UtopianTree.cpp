#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
ll getHeight(ll cycles){
    ll height = 1;
    for(ll i=1; i<cycles+1; i++){
        if(i%2==0) height++;
        else height *=2;
    }
    return height;
}
int main() {
    ll T;
    cin >> T;
    ll N;
    ll result;
    for(int i=0; i<T; i++)
    {
       cin >> N;
       result = getHeight(N);
       cout << result << endl;
    }
    return 0;
}