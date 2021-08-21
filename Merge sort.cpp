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
int a[] = {4,3,2,1} , n=4;
int ans;
using namespace std;
void merge(int i,int n,int j,int m){
	int c[m-i+1],l=i,k=0;
	while(i<=n && j<=m){
		if(a[i]<a[j]) c[k++] = a[i++];
		else  {
			ans += n-i+1;
			c[k++] = a[j++];
	    }		
	}
	while(i<=n) c[k++] = a[i++];
	while(j<=m) c[k++] = a[j++];

	for(int j=0;j<k;j++){
		a[l++] = c[j];
	}

}
void merge_sort(int l ,int r){
	if(l==r)return;
	else {
		int mid = (l+r)/2;
		merge_sort(l,mid);
		merge_sort(mid+1,r);
		merge(l,mid,mid+1,r);
		return;
	}
}
void solve(){
        merge_sort(0,n-1);
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;
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