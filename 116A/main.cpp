#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t=0; cin >> t;
    double m = 0;
    int a=0;
    int b=0;
    int res=0;
    vector<int> h;
    for(int i=0;i<t;i++) {
        cin >> a;
        cin >> b;
        res = res-a+b;
        h.push_back(res);
        a=0; b=0;
    }
    m = *max_element(h.begin(), h.end());
    cout << m;
}
