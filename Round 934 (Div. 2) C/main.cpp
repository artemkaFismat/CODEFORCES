#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t=0; cin >>t;
    for(int code=0; code<t;code++) {
        int n=0; cin >>n;
        vector<int> a(n);
        set<int> s;
        vector<int> mex(n+1, 0);
        for(int i=0;i<n;i++){
            cin >>a[i];
            s.insert(a[i]);
            while (s.find(mex[s.size()]) != s.end()){
                mex[s.size()]++;
            }
        }
        cout <<mex[s.size()]<<"\n";
    }
}
