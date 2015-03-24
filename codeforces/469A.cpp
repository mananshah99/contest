#include <iostream>
#include <set>
using namespace std;
const int MAXN = 100;
int n, p1, p2;
set<int> m(int a[], int b[]) {
    set<int> r;
    for(int i=0; i<p1; i++){
        r.insert(a[i]);
    }
    for(int i=0; i<p2; i++) {
        r.insert(b[i]);
    }
    return r;
}

int main() {
    int x[MAXN], y[MAXN];
    cin >> n >> p1;
    for(int i=0; i<p1; i++) {
        cin >> x[i];
    }
    cin >> p2;
    for(int i=0; i<p2; i++) {
        cin >> y[i];
    }
    set<int> t = m(x, y);
    int c = 1;
    for(set<int>::iterator it=t.begin(); it != t.end(); ++it) {
        if(*it != c) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
        c++;
    }
    if(c != n+1) cout << "Oh, my keyboard!" << endl;
    else cout << "I become the guy." << endl;
}
