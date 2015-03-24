/*
wrote this without looking at the poj
specifications. hasn't been adapted to use
stdin and no space input.

10/20/2014
*/

#include <iostream>
#include <fstream>

using namespace std;
const int SZ = 9;
int grid[SZ][SZ];

const char* fin = "sudoku.in";
const char* fout = "sudoku.out";
bool solved = 0;

void
print() {
    for(int i=0; i<SZ; i++) {
        for(int j=0; j<SZ; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int
read() {
    freopen(fin, "r", stdin);
    freopen(fout, "w", stdout);
    for(int i=0; i<SZ; i++) {
        for(int j=0; j<SZ; j++) {
            cin >> grid[i][j];
        }
    }
    return 0;
}

bool
rowok(int x, int num) {
    for(int i=0; i<SZ; i++) {
        if(grid[x][i] == num)
            return false;
    }
    return true;
}

bool
colok(int y, int num) {
    for(int i=0; i<SZ; i++) {
        if(grid[i][y] == num)
            return false;
    }
    return true;
}

bool
minsqok(int x, int y, int num) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(grid[x+i][y+j]==num)
                return false;
        }
    }
    return true;
}

bool
ok(int x, int y, int num) {
    if(grid[x][y] != 0) {
        return false;
    }
    return colok(y, num) &&
            rowok(x, num) &&
            minsqok(x-x%3, y-y%3, num);
}

bool
done() {
    for(int i=0; i<SZ; i++) {
        for(int j=0; j<SZ; j++) {
            if(grid[i][j]==0) return false;
        }
    }
    return true;
}

void
solve() {
    if(done()) {
        print();
        solved = 1;
        return;
    }

    int x, y;
    for(int i=0; i<SZ; i++) {
        for(int j=0; j<SZ; j++) {
            if(grid[i][j] == 0) {
                x = i;
                y = j;
                break;
            }
        }
    }
    for(int num=1; num<=9; num++) {
        if(ok(x, y, num)) {
            grid[x][y] = num;

            solve();

            grid[x][y] = 0;
        }
    }
}

int main() {
    read();
    solve();
    if(!solved) cout << "NO SOLUTION" << endl;
}
