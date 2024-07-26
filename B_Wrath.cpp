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
    loop(i,0,n){
        cin>>a[i];
    }
    // loop(i,1,n){
    //     if(a[i]>0){
    //         if(a[i]>=i){
    //             loop(j,0,i){
    //                 a[j]=-1;
    //             }
    //         }
    //         else{
    //             loop(j,1,a[i]+1){
    //                 a[i-j]=-1;
    //             }
    //         }
    //     }
    // }

    lli alive=0;
    loopr(i,0,n){
        if(i<n){
            alive++;
        }
        n=min(n,i-a[i]);
    }
    // loop(i,0,n){
    //     if(a[i]!=-1){
    //         alive++;
    //     }
    // }
    cout<<alive<<endl;
    return 0;
}