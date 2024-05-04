#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a=0; int b=0; int c=0;
	cin >> a >> b >> c;
	int ki[6] = { a + b + c,a*b + c,a + b * c,a*b*c,(a + b)*c,a*(b + c) };
	int res = ki[0];
	for (int i = 1; i < 6; i++)
	{
		if (res < ki[i]) { res = ki[i]; }
	}
	cout << res;
}
