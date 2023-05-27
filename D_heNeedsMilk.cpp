#include "bits/stdc++.h"
using namespace std;
#define int long long

int32_t main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);

    int t;
    cin >> t;
    int ct = 0;
    vector<int> Bessie(1, 7);
    vector<int> Elsie(1, 7);
    vector<int> Mildred(1, 7);

    while (t--) {
        int x,l; string s;
        cin >> x >> s >> l;

        if (s=="Bessie")
            Bessie.push_back(l);
        
        else if (s=="Elsie")
            Elsie.push_back(l);
        
        else if (s =="Mildred")
            Mildred.push_back(l);

        int b=accumulate(Bessie.begin(), Bessie.end(), 0);
        int e =accumulate(Elsie.begin(), Elsie.end(), 0);
        int m =accumulate(Mildred.begin(), Mildred.end(), 0);

        if (b > e && b > m)
            ct++;
        else if (e > b && e > m)
            ct++;
        else if (m > b && m > e)
            ct++;
        else if (m == b && m == e && b == e)
            ct++;
    }
    cout << ct << "\n";
}