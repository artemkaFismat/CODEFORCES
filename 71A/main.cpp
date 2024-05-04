#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    size_t len = 0;
    cin >> n;
    string word;
    string sum;
    vector<string> res;

    for(int i = 0; i < n; i++) {
        cin >> word;
        len = word.length();
        if(len >= 10) {
            sum = word[0] + to_string(len - 2) + word[len-1];
            res.push_back(sum);
            word = "";
        }
        else {
            res.push_back(word);
        }
    }
    for(size_t j = 0; j < res.size(); j++)
    {
        cout << res[j] << endl;
    }
}
