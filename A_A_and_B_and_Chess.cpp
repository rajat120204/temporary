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
    string s[8];
    loop(i,0,8){
        cin>>s[i];
    }
    map<char,lli> m;
    m['Q']=9;
    m['R']=5;
    m['B']=3;
    m['N']=3;
    m['P']=1;
    m['q']=9;
    m['r']=5;
    m['b']=3;
    m['n']=3;
    m['p']=1;
    lli white=0, black=0;
    loop(i,0,8){
        loop(j,0,8){
            if(s[i][j]>='A' && s[i][j]<='Z'){
                white+=m[s[i][j]];
            }
            else{
                black+=m[s[i][j]];
            }
        }
    }
    if(white>black){
        cout<<"White"<<endl;
    }
    else if(black>white){
        cout<<"Black"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    return 0;
}