#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
string a;
cin>>a;
for (int i=0;i<a.size();i++)
{
    if (a[i]!=',')
        cout<<a[i];
    else
        cout<<"\n";    
}
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}