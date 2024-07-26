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
#define vcp vector<pair<lli,lli>>
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    lli x,n;
    cin>>x>>n;
    slli st;
    multiset<lli, greater<lli>> light;
    loop(i,0,n){
        lli y;
        cin>>y;
        st.insert(y);
        if(i){
            auto it=st.find(y);
            it++;
            lli prev=0, next=0;
            if(it==st.end()){
                next=x;
            }
            else{
                next=*it;
            }
            it--;
            if(it==st.begin()){
                prev=0;
            }
            else{
                it--;
                prev=*it;
            }
            light.erase(light.find(next-prev));
            light.insert(y-prev);
            light.insert(next-y);
        }
        else{
            light.insert(y);
            light.insert(x-y);
        }
        cout<<(*light.begin())<<" ";
    }
    return 0;
}