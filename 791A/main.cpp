#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int res = 0;
    cin >> a >> b;
    for(int i = 0; i < 1000; i++)
    {
        a = a * 3;
        b = b * 2;
        res++;
        if(a > b)
        {
            break;
        }
    }
cout << res;
}
