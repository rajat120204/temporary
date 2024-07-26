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
    lli n;
    cin>>n;
    lli a[n];
    lli cf=0, cz=0;
    loop(i,0,n){
        cin>>a[i];
        if(a[i]==5){
            cf++;
        }
        else{
            cz++;
        }
    }
    if(cz>0){
        if(cf>=9){
            loop(i,0,cf-(cf%9)){
                cout<<"5";
            }
            loop(i,0,cz){
                cout<<"0";
            }
        }
        else{
            cout<<"0";
        }
    }
    else{
        cout<<"-1";
    }
    
    
    return 0;
}