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
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int v1 = 0, v2 = 0, sp = 0, sm = 0;

    for(int i=0;i<n;i++){
        if(a[i]>b[i]) v1 += a[i];
        else if(a[i]<b[i]) v2 += b[i];
        else if(a[i]==1) sp++;
        else if(a[i]==-1) sm++;
    }

    while(sp--){
        if(v1<v2) v1++;
        else v2++;
    }
    while(sm--){
        if(v1>v2) v1--;
        else v2--;
    }

    cout<<min(v1,v2)<<endl;
}

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    clock_t z = clock();
    int t = 1;
    cin>>t;
    while(t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}
