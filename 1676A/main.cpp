#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    char a[3];
    char b[3];
    for(int i = 0; i < t; i++) {
        cin >> a[i] >> b[i];
        cout << a[i] << b[i];
        if(i == 0) {
            cout << "YES \n";
        }
        else {
            cout << "NO \n";
        }
     }
}
