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
    lli n,m;
    cin>>n>>m;
    char a[n][m], b[n][m];
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
            b[i][j]='.';
        }
    }
    
    loop(i,0,n-2){
        loop(j,0,m-2){
            if(a[i][j]=='#' && a[i+1][j]=='#' && a[i+2][j]=='#' && a[i][j+1]=='#' && a[i+2][j+1]=='#' && a[i][j+2]=='#' && a[i+1][j+2]=='#' && a[i+2][j+2]=='#'){
                b[i][j]='#';
                b[i+1][j]='#';
                b[i+2][j]='#';
                b[i][j+1]='#';
                b[i+2][j+1]='#';
                b[i][j+2]='#';
                b[i+1][j+2]='#';
                b[i+2][j+2]='#';
            }
        }
    }
    // loop(i,0,n){
    //     loop(j,0,m){
    //         cout<<b[i][j];
    //     }
    //     cout<<endl;
    // }
    bool check=true;
    loop(i,0,n){
        loop(j,0,m){
            if(a[i][j]!=b[i][j]){
                check=false;
            }
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}