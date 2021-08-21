#include<bits/stdc++.h>
#define int         int64_t
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
    int n , m;
    cin>>n>>m;
    vector<pair<int,int>> p;
    for(int i=0;i<m;i++){
        int x ,y;
        cin>>x>>y;
        p.pb({x,y});
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    int lcm = 1;
    int res =0;
    int rem =n;
    for(int i=0;i<m && rem > 0;i++){
        int a = p[i].x , b = p[i].y;
        lcm = lcm*b/gcd(lcm,b);
        res +=(rem-n/lcm)*a;
        rem = n/lcm;
    }
    cout<<res<<endl;
}    
    	

 

    
    


signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
    int test;
    cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}