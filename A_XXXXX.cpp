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
        lli n,x;
        cin>>n>>x;
        lli sum=0;
        bool check=false;
        lli left=n, right=0;
        loop(i,0,n){
            lli a;
            cin>>a;
            sum+=a;
            if(a%x!=0){
                check=true;
                left=min(left,i);
                right=max(right,i);
            }
        }
        if(sum%x!=0){
            cout<<n<<endl;
        }
        else if(check){
            cout<<n-min(left+1, n-right)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}