#include <iostream>
#include <cmath>
#include <algorithm>
#define lli long long int
using namespace std;
void Sum()
{
    lli n = 0; cin >> n;
    lli a[n];
    for(lli i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    lli i = 0, j = n-1, k = 1, l = n - 2;
    cout << abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[l]) + abs(a[l] - a[i]) << "\n";
}
int main()
{
    Sum;
    lli t = 0; cin >> t;
    for(int y = 0; y < t; y++) {
        Sum();
    }
    return 0;
}
