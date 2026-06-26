#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

const int MOD = 1e9+7;
const int INF= LLONG_MAX>>1;

void solve(){
    int m,n,k;
    cin>>m>>n>>k;
    char a[10][10];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int p=k;
int q=k;
for(int i=0;i<m;i++){
    while(q--){ 
    for(int j=0;j<n;j++){
       while(p--){
    cout<<a[i][j];
       }
        p=k;
    }  
      cout<<endl;   
}
 q=k;
  
}

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    //cout.tie(NULL);
    //   freopen("cowsignal.in", "r", stdin);   // ← read from file
  //  freopen("cowsignal.out", "w", stdout); // ← write to file
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}