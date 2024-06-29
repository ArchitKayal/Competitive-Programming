#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string a, b;
    cin >> a >> b;
    int ans = a.size() + b.size();
 
    for (int i = 0; i < b.size(); i++) {
        int ptr = i;
        for (int j = 0; j < a.size(); j++) {
            if (ptr < b.size() && a[j] == b[ptr])
                ptr++;
        }
        ans = min(ans, static_cast<int>(a.size() + b.size() - ptr + i));
    }
    cout << ans << endl;
}
 
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}
