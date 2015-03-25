#include <cstdio>
#include <iostream>
using namespace std;


int main(){
	for(int n, k; scanf("%d %d", &n, &k) == 2; ){
		if(k >= n) cout << "2";
		else printf("%d\n", (2 * n + k - 1) / k);
	}
	return 0;
}
