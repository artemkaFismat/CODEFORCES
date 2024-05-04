#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int temp=0;
    int s = 0;
    int res = 0;
    cin >> n;
    for(int i=0; i<n;++i){
        cin >> temp;
        if(temp > 0)
            s += temp;
        else if(temp < 0)
            if(s > 0)
                --s;
            else
                res++;
    }
    cout << res;
}
