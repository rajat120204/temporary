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
    test{
        lli n;
        cin>>n;
        vlli v;
        mll m;
        loop(i,0,n){
            lli x;
            cin>>x;
            v.pb(x);
            m[x]=i;
        }
        vc c;
        string alphabets="abcdefghijklmnopqrstuvwxyz";
        loop(i,0,n){
            c.pb('a');
        }
        //cout<<s;
        lli index=1;
        lli prev=0;
        mll::iterator it;
        it=m.begin();
        ++it;
        for(; it!=m.end(); ++it){
            if(it->first==prev){
                c[it->second]=alphabets[index];
                index++;
                prev=it->first;
            }
            else{
                index=0;
                c[it->second]=alphabets[index];
                prev=it->first;
            }
        }
        loop(i,0,n){
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}