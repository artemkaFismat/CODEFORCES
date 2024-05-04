#include <iostream>
using namespace std;

int main()
{
    int n=0; cin >> n;
    int a=0;
    int b=0;
    int res=0;
    for(int i=0;i<n;i++) {
        cin >> a >> b;
        if(b-a >= 2) res++;
    }
    cout << res;
}
