#include <iostream>
#include <math.h>
#include <stdlib.h>
#define INF 0x7fffffff //int32 maximum value
using namespace std;

//weight difference between the piles needs to be a minimum
//complete search with all partitions

int N;
const int MAXN = 20;
int weights[MAXN];
bool pile[MAXN];
int minval = INF;
void complete_search(int pos) {
    if(pos == N) {
        int tsum = 0;
        int fsum = 0;
        for(int i=0; i<N; i++) {
            if(pile[i]) tsum += weights[i];
            else fsum += weights[i];
        }
        minval = min(minval, abs(tsum - fsum));
        return;
    }
    pile[pos] = true;
    complete_search(pos+1);
    pile[pos] = false;
    complete_search(pos+1);
}
int main() {
    cin >> N;
    for(int i=0; i<N; i++) cin >> weights[i];
    complete_search(0);
    cout << minval << endl;
}
