#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    char a;

    for(int i = 0; i < t; i++) {
        cin >> a;

        if(a == 'c' or a == 'o' or a == 'd' or a == 'e' or a == 'f' or a == 'r' or a == 's') {
            cout << "YES \n";
        }
        else {
            cout << "NO \n";
        }
        a = 0;
    }
}
