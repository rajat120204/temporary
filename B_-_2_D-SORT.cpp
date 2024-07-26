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
 lli t;
 scanf("%lld", &t);
   while(t--){
        lli n;
        scanf("%lld", &n);
        vector<pair<lli,lli>> v;
        loop(i,0,n){
            lli x,y;
            scanf("%lld %lld", &x,&y);
            v.pb({x,y});
        }
        sort(v.begin(),v.end());
        stack<lli> s;
        loop(i,0,n){
            lli top=v[i].first;
            while(v[i].first==top){
                s.push(v[i].second);
                i++;
            }
            while(s.size()!=0){
                printf("%lld %lld\n", top, s.top());
                s.pop();
            }
            i--;
        }
        printf("\n");
    }
    return 0;
}