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
bool check(int mindist , int n , int cows_ct , int positions[]) {
	// 1 2 4 8 9 
	int lastpos = -1;
	for(int i=0;i<n;i++) {
		if(positions[i] - lastpos >= mindist || lastpos ==-1){
			cows_ct--;
			lastpos = positions[i];
		}
		if(cows_ct == 0) break;
	}
	return cows_ct == 0;

}
void solve(){
    int n , cows , positions[100];
    cin>>n>>cows;
    for(int i=0;i<n;i++) cin>> positions[i];
    sort(positions , positions + n);	
    int l = 0 , h = 1e9, mid , ans =-1; 
    while(h >=l ) {
    	mid = l + (h-l)/2;
    	if(check(mid , n , cows , positions)){
    		ans = mid;
    		l = mid + 1;

    	}
    	else {
    		h = mid - 1;
    	}
    } 
    cout<<endl<<ans;

}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}