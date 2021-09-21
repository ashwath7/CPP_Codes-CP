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
int binarySearch(int a[] , int l , int h , int x) {
	if(h>=l) {
		int mid = l + (h-l) / 2 ;
		if(a[mid] == x) return mid;
		if(x < a[mid]) return binarySearch(a , l , mid-1,x);
		if(x > a[mid]) return binarySearch(a , mid+1,h,x);
	}
	return -1;

}
int bsearch(int a[] , int l , int h , int x) {
	int mid;
	while(h>=l) {
		mid = l + (h-l)/2;
		if(a[mid] == x) return mid;
		if(x < a[mid]) h = mid -1;
		if(x > a[mid]) l = mid +1;

	}
	if(a[l]==x) return l;
	else if(a[h]==x) return h;
	else return -1;

}
void solve(){
	int n;
	cin>>n;
    int a[n];
    int ind;
    cin>>ind;
    for(int i=0;i<n;i++) {
    	cin>>a[i];
    }
    sort(a,a+n);
    int index = bsearch(a,0,n-1,ind);
    if(index !=-1) cout<<index<<endl;
    else cout<<"Not found"<<endl;
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