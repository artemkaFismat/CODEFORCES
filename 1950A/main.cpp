#include <iostream>
using namespace std;
void Code()
{
    int a=0; int b=0; int c=0;
    cin >>a>>b>>c;
    if((a<b and b<c)or(a<b and b>c)){
        if(a<b and b<c) cout <<"STAIR \n";
        if(a<b and b>c) cout <<"PEAK \n";
    }
    else cout <<"NONE \n";
}
int main()
{
    int t=0; cin >>t;
    for(int code=0;code<t;code++) Code();
}
