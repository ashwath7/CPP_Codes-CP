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


// #define MAX 500
 
// int multiply(int x, int res[], int res_size);

// void factorial(int n)
// {
//     int res[MAX];
 

//     res[0] = 1;
//     int res_size = 1;
 
//     for (int x=2; x<=n; x++)
//         res_size = multiply(x, res, res_size);
 
    
//     for (int i=res_size-1; i>=0; i--)
//         cout << res[i];
// }
 

// int multiply(int x, int res[], int res_size)
// {
//     int carry = 0;  // Initialize carry
 

//     for (int i=0; i<res_size; i++)
//     {
//         int prod = res[i] * x + carry;
 
//                 res[i] = prod % 10; 
 

//         carry  = prod/10;   
//     }
 

//     while (carry)
//     {
//         res[res_size] = carry%10;
//         carry = carry/10;
//         res_size++;
//     }
//     return res_size;

 

// }
int factorial(int n){
	if(n<=1) return 1;
	return n*factorial(n-1);
}

void solve(){
	int n;
	cin>>n;
    int c =0;
	string x = to_string(n);
	int num = x.size();
	int ss = factorial(num);
	for(int i=10;i<=99;i++){
		int p = 1;
		while(i  !=0 ){
			int rem = i%10;
			i = i/10;
			
			p = p*i*rem;
		}
		if(p>ss) c++;
	}
	cout<<c;



    
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