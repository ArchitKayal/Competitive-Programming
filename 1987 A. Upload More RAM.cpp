#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
#define print(a)    for(auto x : a) cout << x << " "; cout << endl

using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int count=0;
    while(n!=0){
        n--;
        if(n==0) break;
        for(int i=0;i<k;i++){
            count++;
        }
    }
    cout<<count+1<<endl;   
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
