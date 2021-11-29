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
int find_pivot(int l , int h , int x, vector<int> a, int n){
    int mid;
    while(h>=l){
        mid = l + (h-l)/2;
        // all 4 cases here.
        if(mid < h && a[mid] > a[mid+1]) return mid;
        else if(mid > l && a[mid] < a[mid-1]) return mid-1;
        else if(a[l] >= a[mid]) h = mid-1;
        else if(a[l] < mid) l  = mid+1;
        else return -1;
    }
}
int binary_search(vector<int> a, int l, int h, int x,int n){
    while(h>=l){
        int mid = l + (h-l)/2;
        if(a[mid] == x) return mid;
        if(a[mid] < x) l = mid+1;
        if(a[mid] > x) h = mid-1 ;
    }
    if(a[l] == x) return l;
    else if(a[h] == x) return h;
    else return -1;

}

void solve(){
    int n , x , ans ,ans2 ; cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int pivot =  find_pivot(0,n-1,x,a,n); 
    
    // If piovot = -1 , the array is not sorted do normal binary search.
    if(a[pivot] == x)  cout<<pivot;
    if(pivot == -1){
      ans =   binary_search(a,0,n-1,x,n);
      cout<<ans<<endl;


    }     
    int first_half = binary_search(a,0,pivot,x,n);
    if(first_half== -1) {
        ans2 = binary_search(a,pivot,n-1,x,n);
        cout<<ans2;
    }
    else cout<<first_half;

     
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