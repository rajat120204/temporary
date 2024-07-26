#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define trav(a,x) for (auto& a : x)
#define pb push_back
#define eb emplace_back
#define vlli vector<lli>
#define vc vector<char>
#define vs vector<string>
#define mll map<lli,lli>
#define mcc map<char,char>
#define mss map<string,string>
#define mls map<lli,string>
#define msl map<string,lli>
#define slli set<lli>
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    test{
        lli n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            loop(i,0,n){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
        else if(!(n%2) && k>=2){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            loop(i,0,n/2){
                cout<<"2"<<" ";
            }
            cout<<endl;
        }
        else if(n%2 && k>=3){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            cout<<"3"<<" ";
            loop(i,0,n/2-1){
                cout<<"2"<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}