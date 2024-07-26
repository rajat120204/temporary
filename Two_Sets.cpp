#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
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
    lli n;
    cin>>n;
    if(n%4==0 || (n+1)%4==0){
        cout<<"YES"<<endl;
        if(n%4==0){
            cout<<n/2<<endl;
            for(lli i=1; i<=n; i++){
                if(i%4==0 || (i-1)%4==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(lli i=1; i<=n; i++){
                if(i%4!=0 && (i-1)%4!=0){
                    cout<<i<<" ";
                }
            }
        }
        else{
            cout<<(n+1)/2<<endl;
            cout<<"1 2 ";
            for(lli i=4; i<=n; i++){
                if(i%4==0 || (i+1)%4==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            cout<<"3 ";
            for(lli i=5; i<=n; i++){
                if(i%4!=0 && (i+1)%4!=0){
                    cout<<i<<" ";
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}