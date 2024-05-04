#include <iostream>
#include <string>
using namespace std;

void Code()
{
    char a;
    for(int i = 0; i < 1; i++) {
        cin >> a;
        if(isupper(a) == islower(a)) cout << tolower(a);
        if(isupper(a) > islower(a)) cout << toupper(a);
        if(isupper(a) < islower(a)) cout << tolower(a);
    }
}

int main()
{
    Code();
}
