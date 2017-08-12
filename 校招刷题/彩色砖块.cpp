#include <bits/stdc++.h>

using namespace std;

string s;
set<char> S;
int main() 
{
    cin >> s;
    for(int i = 0; i < s.size(); i++) S.insert(s[i]);
    int ans = S.size();
    if(ans > 2) ans = 0;
    cout << ans << endl;
    return 0;
}