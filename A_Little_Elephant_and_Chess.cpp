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
    char c[8][8];
    lli white=0, black=0;
    loop(i,0,8){
        loop(j,0,8){
            cin>>c[i][j];
            if(c[i][j]=='W'){
                white++;
            }
            else{
                black++;
            }
        }
    }
    if(white!=black){
        cout<<"NO"<<endl;
        return 0;
    }
    bool check=true;
    loop(i,0,8){
        loop(j,0,7){
            if(c[i][j]==c[i][j+1]){
                check=false;
                break;
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