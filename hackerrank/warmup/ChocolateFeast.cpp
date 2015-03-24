#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int main() {
    ll T, N, C, M;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N >> C >> M;

        ll count = 0;
        while(N-C>=0){
            N-=C;
            ++count;
        }
        ll wrappers = count;
        if(wrappers<M) {
            cout << count << endl;
        }
        else{
            while(wrappers-M>=0){
                wrappers-=M;
                ++count;
                ++wrappers;
            }
            cout << count << endl;
        }
        
    }
    return 0;
}
