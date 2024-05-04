#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string bit;
    int n = 0;
    int result = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> bit;

        if(bit == "X++" or bit == "++X") {
            result++;
        }
        if(bit == "X--" or bit == "--X") {
            result--;
        }
        bit = {};
    }
cout << result;
}
