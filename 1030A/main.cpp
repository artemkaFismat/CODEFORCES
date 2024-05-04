#include <iostream>
using namespace std;

int main()
{
    int n=0; cin >> n;
    int t=0;
    int f=0;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] == 1) f++;
        if(i == n-1) {
            if(f == 0) cout << "EASY"; else cout << "HARD";
        }
    }
}
