#include <iostream>
using namespace std;
void Code()
{
    int n=0; cin >>n;
    int a[n];
    for(int i=0;i<n;i++) cin >>a[i];
    for(int j=0;j<n-1;j++){
        if(a[j] != a[j+1]) cout <<j+<<"\n";
    }
}
int main()
{
    int t=0; cin >>t;
    for(int code=0;code<t;code++) Code();
}
