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
    int a[10] = {1,2,4};
    int b [10]= {1,3,4};
    int c[10];
    int n = 3, m = 3;
    int i=0 , j = 0 , k = 0;
    while(i<n && j<m){
    	if(a[i] < b[j]) c[k++] = a[i++];
    	else c[k++] = b[j++];
    }
    while(i<n) c[k++] = a[i++];
    while(j<m) c[k++] = b[j++];
    for(int i=0;i<k;i++) cout<<c[i]<<" ";
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