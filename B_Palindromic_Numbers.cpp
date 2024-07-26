#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define vi vector<int>
#define double long double
#define float double
#define pb push_back
#define N 100005
#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define ld long double
#define float double
#define f(i, x, n) for (ll i = x; i < n; i++)
#define rf(i, x, n) for (ll i = x; i >= n; i--)
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (ll) a.size()
#define pi (3.141592653589)
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll fastprime(ll n){f(i, 2, (ll)sqrt(n)) if (n % i == 0) return 0;return 1;}
ll power(ll n,ll a){ ll res=1; while(n){ if(n%2) res*=n,a--; else	n*=n,a/=2;} return res;}
ll modpowe(ll n,ll a,ll p){ ll res=1; while(a){ if(a%2) res= ((res*n)%p) ,a--; else	n=((n*n)%p),a/=2;} return res;}
void solve(){
	
	ll int n;
	cin>>n;
	
	string s,ans;
	cin>>s;
		
	if(s[0]!='9'){
		for(int i=0;i<s.size();i++){
			int x ='9'-s[i];
			cout<<x;
			// ans.pb(x);
		}
        cout<<endl;
	}
	else{
		string y="";
		y.pb('0');
		y=y+s;
		for(int i=0;i<=s.size();i++){
			ans.pb('1');
		}
		// cout<<ans<<endl;
		// cout<<y<<endl;
		vll fin;
		for(int i=ans.size();i>=0;i--){
			if(ans[i]>=y[i]){
				int x = ans[i]-y[i];
				// cout<<x;
				fin.pb(ans[i]-y[i]);
				
			}
			else if(i!=0){
				string x;
				x.pb(ans[i-1]);
				x.pb(ans[i]);
				int a = stoi(x)- (y[i]-'0');
				fin.pb(a);
				
				// cout<<a;
				ans[i-1]='0';
			}
		}
		fin.pop_back();
		reverse(all(fin));
		fin.pop_back();
		
		for(auto val : fin){
			cout<<val;
		}
		cout<<endl;
		
	}
	
    
}
int main(){
fast;
int t=1;
cin>>t;
while(t--){
  solve();
}

    return 0;
}