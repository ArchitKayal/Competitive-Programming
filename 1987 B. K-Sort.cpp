#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
#define print(a) for(auto x : a) cout << x << " "; cout << endl

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k = 0;
    int max_diff = 0;  
    for(int i = 1; i < n; i++) {  
        if(a[i] < a[i-1]) {
            int diff = a[i-1] - a[i];
            k += diff;
            max_diff = max(max_diff, diff);  
            a[i] = a[i-1];  
        }
    }
    k += max_diff;  
    cout << k << endl;
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
