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
        lli n;
        cin>>n;
        vs v1,v2;
        string s1,s2;
        msl m;
        loop(i,0,n){
            cin>>s1>>s2;
            v1.pb(s1);
            v2.pb(s2);
            m[v1[i]]++;
        }
        
            loop(i,0,n){
                if(m[v1[i]]>1){
                    cout<<v1[i]<<" "<<v2[i]<<endl;
                }
                else{
                    cout<<v1[i]<<endl;
                }
            }
        
    }
    return 0;
}