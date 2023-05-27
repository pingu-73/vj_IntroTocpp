#include "bits/stdc++.h"
using namespace std;
#define int long long

void censor(string s, string t) {
    string c; int a = t.size();
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i]; c+=ch;

        if (c.size()>=t.size() && c.substr(c.size()-t.size())==t)
            c = c.substr(0, c.size() - t.size());
    }
    cout << c << "\n";
}

int32_t main() {
	
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string s, t;
    cin >> s >> t;
    censor(s, t);
}