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
bool check(int mid , int n ,int t, vector<int> m) {
	int p =0 ;
	for(int i=0;i<n;i++) {
		p += mid/m[i];
        if(p>=t) break;
	}
	return p>= t;
}
void solve(){
    int n , t ; cin >> n >> t;
    vector<int> m ; 
    for(int i = 0 ; i < n ; i++) {
    	int val ;
    	cin>>val;
    	m . pb(val);
    }	
    sort(m.begin() , m.end());	
    int l =0 , h = 1e18 , mid , ans =1e18;
    while(h >= l) {
    	mid = l + (h-l)/2;
    	if(check(mid ,n ,t , m )){
    	
    		ans = mid;
    		h = mid -1;
    	}
    	else l = mid +1;
    }
    cout<<ans<<endl;
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}