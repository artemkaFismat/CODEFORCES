#include <iostream>

using namespace std;

int main()
{
    long long  n = 0;
    long long  m = 0;
    long long  a = 0;
    long long  l = 0;
    long long  b = 0;

    cin >> n >> m >> a;

    l = n / a;
    if(n % a != 0) {
        l++;
    }
    b = m / a;
    if(m % a != 0) {
        b++;
    }
    cout << l * b;
}
