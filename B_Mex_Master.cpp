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
        multiset<lli> st;
        loop(i,0,n){
            lli x;
            cin>>x;
            if(x!=0){
                st.insert(x);
            }
        }
        lli ans=-1;
        if(st.size()>=n/2){
            ans=0;
        }
        else if(st.size()==0){
            ans=1;
        }
        else{
            auto it=*(st.begin());
            auto it1=*(st.rbegin());
            if(it==it1 && it==1){
                ans=2;
            }
            else{
                ans=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}