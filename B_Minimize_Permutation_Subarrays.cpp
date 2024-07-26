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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        lli imax=0, io=0, it=0;
        loop(i,0,n){
            if(a[i]==n){
                imax=i+1;
            }
            if(a[i]==1){
                io=i+1;
            }
            if(a[i]==2){
                it=i+1;
            }
        }
        if(abs(io-it)==1){
            if(abs(imax-io)<abs(imax-it)){
                cout<<io<<" "<<imax<<endl;
            }
            else{
                cout<<it<<" "<<imax<<endl;
            }
        }
        else{
            if(io<it){
                cout<<io+1<<" "<<imax<<endl;
            }
            else{
                cout<<it+1<<" "<<imax<<endl;
            }
        }
    }
    return 0;
}