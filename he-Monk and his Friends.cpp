#include<bits/stdc++.h>
//#define int         int64_t
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
	int n,m;
	cin>>n>>m;
	map<string,int> a;
	for(int i=0;i<(n+m);i++){
		string z;
		cin>>z;
		if(a[z]==0){
			cout<<"NO"<<endl;;
			a[z]++;
		}	
		else cout<<"YES"<<endl;
	}
    
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}