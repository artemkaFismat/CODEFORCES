#include <iostream>
using namespace std;
#define lli long long int
int main()
{
    lli a[4];
    lli res=0;
    for(int i=0;i<4;i++) {
        cin >> a[i];
        if(i >= 1) {
            if(a[i-1] == a[i]) res++;
        }
    }
    cout << res;
}
