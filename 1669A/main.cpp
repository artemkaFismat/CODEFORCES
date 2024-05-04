#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    int reit = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> reit;
        if(reit <= 1399) {
            cout << "Division 4 \n";
        }
        if(reit >= 1400 and reit <= 1599) {
            cout << "Division 3 \n";
        }
        if(reit >= 1600 and reit <= 1899) {
            cout << "Division 2 \n";
        }
        if(reit >= 1900) {
            cout << "Division 1 \n";
        }
        reit = 0;
    }
}
