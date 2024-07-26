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
    lli n;
    cin>>n;
    vlli v;
    loop(i,0,n){
        lli x;
        cin>>x;
        v.pb(x);
    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    bool check=true;
    lli start=-1, end=-1;
    loop(i,0,n-1){
        if(v[i]>v[i+1] && check){
            start=i;
            check=false;
        }
        else if(v[i]<v[i+1] && !check){
            end=i;
            break;
        }
    }
    if(end==-1){
        end=n-1;
    }
    sort(v.begin()+start,v.begin()+end+1);
    if(is_sorted(v.begin(),v.end())){
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}