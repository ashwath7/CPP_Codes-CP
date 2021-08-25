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
    string s;
    long long  c=0,c1=0;
    int freq[256] ,a[100005];
    bool isTrue =true;
    cin>>s;
    memset(freq,0,sizeof(freq));
    memset(a,0,sizeof(a));
    for(int i=0;i<s.size();i++){
    	int val = s[i];
    	freq[val]++;
    	c++;
    }
    for(int i=0;i<256;i++){
    	if(freq[i]>0) {
    		int val1 = freq[i];
    		a[val1]++;
    	}
    }
   

    
    for(int i=0;i<256;i++){
    	//if(freq[i]>0 && a[i]>0 && a[i]>=2 && freq[i]>2 ) isTrue = false;
    	//if(freq[i]==freq[i+1]) isTrue = true;
    	//if(freq[i]==freq[i+1] ){
    		//isTrue=true;
    		
    	//}	
    	//if(a[i]>=2   ) isTrue =false;
    	//if(freq[i]>2) isTrue = false;
    	//else if(freq[i]==freq[i+1]) isTrue = true;
    	if(freq[i]==1){
    		c1++;
    	}
    	if(c1>1 || freq[i]==1)isTrue = false;
    	else if(a[i]==c) isTrue = true;

    	else if(freq[i+1] == freq[i]-1 ) isTrue = true;
    	else if( a[i+1] > a[i]+1 )isTrue = true;
    	else if(a[i]>2 || freq[i]>2) isTrue = false;
    } 
    if(isTrue)cout<<"YES";	
    else cout<<"NO";

    
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}