#include <iostream>
using namespace std;

int N, M;
int main() {
    cin >> N >> M;
    bool sw = false;
    for(int i=0; i<N; i++) {
        if(i % 2 == 0) {
            for(int j=0; j<M; j++) cout << "#";
            cout << endl;
        }
        else {
            if(!sw) {
                for(int j=0; j<M-1; j++) cout << ".";
                cout << "#" << endl;
            }
            else {
                cout << "#";
                for(int j=0; j<M-1; j++) cout << ".";
                cout << endl;
            }
            sw = !sw;
        }
    }
}
