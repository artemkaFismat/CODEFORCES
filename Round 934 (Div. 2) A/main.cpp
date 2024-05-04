#include <iostream>
using namespace std;
void Code()
{
    int n=0;
    int k=0; cin >>n>>k;
    if(k>=n-1) cout <<1<<"\n";
    else cout <<n<<"\n";
}
int main()
{
    int t=0; cin >>t;
    for(int code=0;code<t;code++) Code();
}
