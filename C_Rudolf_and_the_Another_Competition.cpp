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
#define debug(...) 69
using namespace std;


bool cmp(const pair<lli,lli> &p1, const pair<lli,lli> &p2) {
        if(p1.first > p2.first) {
            return true;
        } 
        else if(p1.first == p2.first) {
            return p1.second < p2.second;
        }
        else {
            return false;
        }
}
int main()
{
 time
    test{
        lli n,m,h;
        cin>>n>>m>>h;
        vcp vp(n,{0,0});
        loop(i,0,n){
            vlli v(m);
            loop(j,0,m){
                cin>>v[j];
            }
            sort(v.begin(), v.end());
            lli sum=0;
            loop(j,0,m){
                if(sum+v[j]<=h){
                    sum+=v[j];
                    vp[i].second+=sum;
                    vp[i].first++;
                }
                else{
                    break;
                }
            }
        }
        pair<lli,lli> p=vp[0];
        
        sort(vp.begin(), vp.end(),cmp);
        
        lli rank=0;
        loop(i,0,n){
            if(vp[i]==p){
                rank=i+1;
                break;
            }
        }
        cout<<rank<<endl;
    }
    return 0;
}