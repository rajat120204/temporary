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
    test{
        lli n,m,k;
        cin>>n>>m>>k;
        lli c=n/k;
        lli ans=0;
        if(m==0){
            ans=0;
        }
        else if(m==1){
            ans=1;
        }
        else{
            if(c>=m){
                ans=m;
            }
            else{
                m-=c;
                lli a=m/(k-1);
                if(m%(k-1)!=0){
                  a++;
                }
                ans=c-a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}