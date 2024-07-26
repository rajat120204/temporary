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
        lli a[n][n-1];
        vlli v;
        lli second=0;
        loop(i,0,n){
            loop(j,0,n-1){
                cin>>a[i][j];
            }
        }
        mll m;
        loop(i,0,n){
            v.push_back(a[i][0]);
            m[v[i]]++;
        }
        for(auto&it:m){
            if(it.second==1){
                second=it.first;
            }
        }
        lli first=0;
        lli index=0;
        loop(i,0,n){
            if(v[i]!=second){
                first=v[i];
            }
            if(v[i]==second){
                index=i;
            }
        }
        cout<<first<<" ";
        loop(i,0,n-1){
            cout<<a[index][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}