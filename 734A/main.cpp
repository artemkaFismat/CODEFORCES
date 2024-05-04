#include <iostream>
using namespace std;

void Code()
{
    int n=0; cin >> n;
    int d=0;
    int a=0;
    char s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i] == 'D') d++;
        if(s[i] == 'A') a++;
        if(i == n-1) {
            if(a>d) cout << "Anton";
            if(a<d) cout << "Danik";
            if(a==d) cout << "Friendship";
        }
    }
}
int main()
{
    Code();
}
