#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    string a;
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a == "Tetrahedron") {
            res += 4;
        }
        if(a == "Cube") {
            res += 6;
        }
        if(a == "Octahedron") {
            res += 8;
        }
        if(a == "Dodecahedron") {
            res += 12;
        }
        if(a == "Icosahedron") {
            res += 20;
        }
        a = "";
    }
    cout << res;
}
