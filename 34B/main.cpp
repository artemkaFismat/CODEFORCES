#include<bits/stdc++.h>
using namespace std;
void Code()
{
    int n=0;
    int m=0; cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<m;i++){
        if(a[i]<0)
        sum+=a[i];
    }
    cout<<-(sum)<<endl;
}
int main()
{
    Code();
}
