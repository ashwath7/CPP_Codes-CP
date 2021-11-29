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
bool check(int mid, int m, vector<int> a, int n, int l , int h){
	int sum = 0 , split =1;
	for(int i=0;i<n;i++){
		if(sum + a[i] <= mid){
			sum += a[i];
		}
		else {
			sum = a[i];
			split++;
		}
	}
	return split<=m;
}
void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l = *max_element(a.begin(),a.end());\
    int h = 0;
    for(int i=0;i<n;i++){
          h +=a[i];
    }
    int mid, ans = -1;
    while(h>=l){
    	mid = l + (h-l)/2;
    	if(check(mid,m,a,n,l,h)){
    		ans = mid;
    		h = mid-1;
    	}
    	else l = mid+1;
    }
    cout<<ans;
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