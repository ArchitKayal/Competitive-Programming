#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
#define print(a)    for(auto x : a) cout << x << " "; cout << endl

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int ans = h[n-1];
    for(int i=n-2;i>=0;i--){
        ans = max(ans+1,h[i]);
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
    cin >> t;
    while(t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}
