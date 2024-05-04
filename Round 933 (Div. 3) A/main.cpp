#include <iostream>
using namespace std;
void Code()
{
    int n=0;
    int m=0;
    int k=0; cin >>n>>m>>k;
    int res=0;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int j=0;j<m;j++) cin >> b[j];

    for(int l=0;l<n;l++) {
        for(int v=0;v<m;v++) {
            if(a[l]+b[v] <= k) res++;
        }
    }
    cout <<res<<"\n";
}
int main()
{
    int t=0; cin >> t;
    for(int code=0;code<t;code++) Code();
}
