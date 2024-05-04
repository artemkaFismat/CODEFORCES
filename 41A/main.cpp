#include <iostream>
#include <string>
#include <memory.h>
using namespace std;

int main()
{
    string a; cin >>a;
    char t[a.size()];
    char k[a.size()];
    int res=0;
    for(int i=0;i<a.size();i++){
        cin >>t[i];
    }
    memcpy(k, t, sizeof t);
    for(int j=a.size();j>=0;j--){
            for(int v=0;v<a.size();v++){
                if(k[j]==t[v]) res++;
            }
        }
    if(res==a.size()) cout <<"YES"; else cout <<"NO";
}
