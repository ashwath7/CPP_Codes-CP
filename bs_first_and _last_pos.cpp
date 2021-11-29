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
bool check(int mid, int x, vector<int> a){
	return a[mid] < a[mid+1];
}
int Peak_index(vector<int>a , int x, int n){
	int l = 0, h = n-1, mid , ans = -1;
	while(h>=l){
		mid = l +(h-l)/2;
		if(check(mid,x,a)){
			ans = mid+1;
			l = mid +1;

		}
		else h = mid-1;
	}
	return ans;
}
int binary_search(int l , int h ,int x , vector<int> a){
	int mid;
	while(h>=l){
		mid = l+ (h-l)/2;
		if(a[mid] == x) return mid;
		if(x > a[mid]) l = mid+1;
		else h = mid-1;
	}
      
     if(a[l]==x) return l;
     else if(a[h]==x) return h;
     else return -1; 
}
int order_ignostic(int l , int h , int target, vector<int> a,int n){
	bool  is_asc = (a[0] < a[n-1]);
    int mid;
    if(is_asc) {
         while(h>=l){
         	mid = l + (h-l)/2;

         	if(target > a[mid] ) l = mid + 1;
         	else  h = mid-1;
         }
    }  
    else {
    	while(h>=l){
    		mid = l + (h-l)/2;
    		
    		if(target > a[mid]) h = mid-1;
    		else l = mid+1;
    	}
    }
    if(mid == target)return mid;
    if(a[l] == target) return l;
    else if(a[h] == target) return h;
    else return -1;	

}
void solve(){
    int n, x ; cin>>n>>x;
    vector<int> a;
    for(int i=0;i<n;i++){
    	int val;
    	cin>>val;
    	a.pb(val);
    }
    int peak = Peak_index(a,x,n);
    int first_half = binary_search(0,peak,x,a);

    if(first_half == -1){
    	// Search in second half using orderignostic binary search.
    	int second_half = order_ignostic(peak,n-1,x,a,n);
    	cout<<second_half<<endl;
    }
    else {
    	cout<<first_half<<endl;
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