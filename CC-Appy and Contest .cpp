#include<bits/stdc++.h>
// #define int         int64_t
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
// #define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);

}
void solve(){
     long long int T,N,A,B,K;
    cin>>T;
  

        cin>>N>>A>>B>>K;
        long long int ans=N/A;
        ans+=(N/B);

        long long int a=A, b=B, lcm;
        lcm=(A*B)/gcd(a,b);

        ans-=(2*((N)/lcm));

        if(ans>=K)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    
   

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