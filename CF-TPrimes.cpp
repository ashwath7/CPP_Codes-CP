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
int a[100005];
bool isPrime(int N){
	if(N<2)return false;
	if(N<4)return true;
	if((N&1)==0)return false;
	if(N%3==0)return false;
	int curr=5,s=sqrt(N);
	while(curr<=s){
		if(N%curr==0)return false;
		curr+=2;
		if(N%curr==0)return false;
		curr+=4;
	}
	return true;
}
void solve(){
	// int n;
	// cin>>n;
	// int c=0;
	// vector<int> v(n,0);
	// for(int i=0;i<n;i++)cin>>a[i];
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<a[i];j++){
	// 		if(a[i]%(j+1)==0)v[i]++;;
	// 	}
	// }
	// for(int i=0;i<v.size();i++){
	// 	if(v[i]==3)cout<<"YES"<<endl;
	// 	else cout<<"NO"<<endl;
	// }
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int x =sqrt(a[i]);
		if(isPrime(x)){
		    if(x*x==a[i] && a[i]!=1)cout<<"YES"<<endl;
		    else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;    
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