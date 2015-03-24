#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long t; //shortens runtime
    double v [128 * 1024];
    int idx = 0;
    while (cin >> t) {
        v[idx] = sqrt(t);
        ++idx;
    }

    for (int i = idx - 1; i >= 0; --i) {
        printf("%.4f\n", v[i]);
    }

    return 0;
}
