/*
ID: manan.s1
LANG: C++
TASK: wormhole
*/
#include <iostream>
#include <fstream>
#define MAXN 20
using namespace std;

int N;
int X[MAXN+1], Y[MAXN+1];
int partner[MAXN+1], next[MAXN+1];

bool cycle() {
    for(int s = 1; s <= N; s++) {
        int pos = s;
        for(int k = 0; k < N; k++)
            pos = next[partner[pos]];

        if (pos != 0) return true;
    }
    return false;
}

// count all solutions
int recurse() {
    int total = 0;
    int i;
    for(i = 1; i <= N; i++)
        if (partner[i] == 0) break;

    if (i > N) return (cycle()) ? 1 : 0;

    for (int j = i+1; j <= N; j++) {
        if (partner[j] == 0) {
            partner[i] = j;
            partner[j] = i;
            total += recurse();
            partner[i] = 0;
            partner[j] = 0;
        }
    }
    return total;
}

int main() {
    freopen("wormhole.in", "r", stdin);
    freopen("wormhole.out", "w", stdout);

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (X[j] > X[i] && Y[i] == Y[j]) {
                if (
                    next[i] == 0 ||
                    X[j] - X[i] <
                    X[next[i]] - X[i]
                   )
                    next[i] = j;
            }
        }
    }

    cout << recurse() << endl;
    return 0;
}
