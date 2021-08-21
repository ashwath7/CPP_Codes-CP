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
//priority_queue<data_type> -->decreasing
// priority_queue<data_type, vector<data_type> --->increasing
priority_queue<int , vector<int> , greater<int> > pq[4];
map<int,bool> sold;
int price[200005];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>price[i];
	}
	for(int i=0;i<n;i++){
		int col;
		cin>>col;
		pq[col].push(price[i]);
	}
	for(int i=0;i<n;i++){
		int col;
		cin>>col;
		pq[col].push(price[i]);
	}
	int m;
	cin>>m;
	while(m--){
		int col,ans =-1;
		cin>>col;
		while(!pq[col].empty()){
			int p = pq[col].top();
			pq[col].pop();
			if(sold[p]==true){
				continue;
			}
			else {
				ans = p;
				sold[p] = true;
				break;
			}
		}
		cout<<ans<<" ";
	}
	
    
    
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