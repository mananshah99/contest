#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool ch[26];
string s;
int N;
int main() {
    cin >> N >> s;
    for(int i=0; i<N; i++) {
        char c = tolower(s[i]);
        int v = (int)(c) - 'a';
        ch[v] = true;
    }
    for(int i=0; i<26; i++) {
        if(!ch[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
