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
    int n;
    cin>>n;
    vector<int> a(100000,4);
    vector<int>b(100000,7);
    int c4=0,c7=0;
    bool  flag = false;
    if(n>=4){

    for(int i=0;i<6;i++){
    	if((n-4*i)%7==0){
    		flag = true;
    		for(int j=0;j<i;j++)cout<<a[i];
    		for(int j=0;j<(n-4*i)/7;j++)cout<<b[i];
    		return;	
    			
    	}
    }
   } 
    if(!flag)cout<<-1;
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