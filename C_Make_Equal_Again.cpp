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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        bool check=true;
        loop(i,0,n){
            if(a[i]!=a[0]){
                check=false;
            }
        }
        if(check){
            cout<<0<<endl;
            continue;
        }
        if(a[0]==a[n-1]){
            lli left=0;
            lli right=n-1;
            loop(i,0,n){
                if(a[i]!=a[0]){
                    left=i;
                    break;
                }
            }
            loopr(i,0,n){
                if(a[i]!=a[n-1]){
                    right=i;
                    break;
                }
            }
            cout<<right-left+1<<endl;
        }
        else{
            lli countleft=0;
            lli countright=0;
            loop(i,0,n){
                if(a[i]==a[0]){
                    countleft++;
                }
                else{
                    break;
                }
            }
            loopr(i,0,n){
                if(a[i]==a[n-1]){
                    countright++;
                }
                else{
                    break;
                }
            }
            cout<<n-max(countleft,countright)<<endl;
        }
    }
    return 0;
}