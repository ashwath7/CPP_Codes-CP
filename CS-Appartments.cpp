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
    int n , m , k , ans =0;
    cin>>n>>m>>k;
    multiset<int> ms ; // Size of appartment
    vector<int> a;
    for(int i=0;i<n;i++) {
    	int w;
    	cin>>w;
    	a.pb(w); // applicants
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
    	int x;
    	cin>>x;
    	ms.insert(x);
    }
    for(int i=0;i<n;i++){
    	auto it = ms.lbnd(a[i]-k); //lower bound
    	// auto s = ms.find(*it);
    	// for(auto m : ms) {
    	// 	cout<<m<<" ";

    	// }
    	//cout<<endl;
    	if(it != ms.end() && *it <= (a[i]+k)) {
              ans++;
              // if(s != ms.end())
              ms.erase(it);
    	}
    }
    cout<<ans;
    // multiset<int> ms = {1,2,2,3,4,4};
    // auto it = ms.lbnd(4);
    // auto s = ms.find(*it);
    // if(s !=ms.end()) {
    // 	ms.erase(s);
    // }
    // for(auto it : ms) {

    // 	cout<<it<<" ";
    // }
  
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