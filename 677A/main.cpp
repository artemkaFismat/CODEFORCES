#include <iostream>
using namespace std;

void Code()
{
    int n=0; cin >> n;
    int h=0; cin >> h;
    int rsh=0;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] <= h) rsh++;
        if(a[i] > h) rsh=rsh+2;
    }
    cout << rsh;
}
int main()
{
    Code();
}
