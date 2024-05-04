#include <iostream>
#define ll long long int
using namespace std;
void Code()
{
    ll a=0; ll b=0; ll c=0; ll res=1;
    cin >>a>>b>>c;
    res=a*res;
    ll v=0; v=(b+c)-3;
    if(v>0) res+=2; else cout <<"-1 \n";
    cout <<res<<"\n";

}
int main()
{
    ll t=0; cin >>t;
    for(ll code=0;code<t;code++) Code();
}
