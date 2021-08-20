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
#define gcd(a,b)    __gcd((a),(b))
#define mi        map<int,int>
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int a[10] ={5,44,100,34,23,456,3,2,-1,99},n=10;
void print_array(int l, int r) {
	for(int i=l;i<=r;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int partition(int l,int r) {
	int pivot =a[r]; // int pivot = a[l+(random()%(l-r+1))] --> any number from [l...r]
	int i=l , j=r;
	int temp[n];
	for(int k=l;k<=r;k++){
		if(a[k]<pivot)temp[i++] =a[k];
		else if(a[k]>pivot)temp[j--] =a[k]; 
	}
	int ans =i;

	// copying in the original array
	for(int k=l;k<=r;k++){
		if(k<i||k>j)a[k] = temp[k];
		else a[k] = pivot;
	}
	return ans;
}
void quick_sort(int l,int r) {
	if(l>=r) return;
	int ind = partition(l,r);
	quick_sort(l,ind-1);
	quick_sort(ind+1,r);
}
void solve(){
	quick_sort(0,n-1);
	print_array(0,n-1);


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