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
        lli n;
        cin>>n;
        vlli v1;
        loop(i,0,n){
            lli x;
            cin>>x;
            v1.pb(x);
        }
        vlli v2;
        lli count=0;
        loop(i,0,n){
            if(v1[i]==0){
                count++;
            }
            else{
                v2.push_back(count);
                count=0;
            }
        }
        v2.pb(count);
        sort(v2.begin(), v2.end());
        cout<<v2[v2.size()-1]<<endl;
    }
    return 0;
}