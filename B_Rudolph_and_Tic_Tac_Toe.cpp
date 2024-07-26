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
        char c[3][3];
        bool check=false;
        loop(i,0,3){
            loop(j,0,3){
                cin>>c[i][j];
            }
        }
        char ans;
        loop(i,0,3){
            if(c[i][0]==c[i][1] && c[i][1]==c[i][2] && c[i][0]!='.'){
                check=true;
                ans=c[i][0];
                break;
            }
        }
        loop(j,0,3){
            if(c[0][j]==c[1][j] && c[1][j]==c[2][j] && c[0][j]!='.'){
                check=true;
                ans=c[0][j];
                break;
            }
        }
        if(c[0][2]==c[1][1] && c[1][1]==c[2][0] && c[0][2]!='.'){
            check=true;
            ans=c[0][2];
        }
        if(c[0][0]==c[1][1] && c[1][1]==c[2][2] && c[0][0]!='.'){
            check=true;
            ans=c[0][0];
        }
        if(check){
            cout<<ans<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}