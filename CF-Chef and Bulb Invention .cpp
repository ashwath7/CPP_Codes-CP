#include<bits/stdc++.h>
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    long int n,k,p;
    cin>>n>>k>>p;
    long int ind = p%k;
    long int rem = p/k;
    long int ans = rem;
    ans +=(ind)*(n/k);
    long int extra = n%k;
    if(extra > ind )ans +=ind;
    else ans +=extra;
    cout<<ans<<endl;

    
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
   long int test;
    cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}