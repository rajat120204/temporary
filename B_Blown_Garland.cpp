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
    string s;
    cin>>s;
    lli len=s.length();
    lli pos_r=-1, pos_g=-1, pos_b=-1, pos_y=-1;
    loop(i,0,len){
        if(s[i]=='R'){
            pos_r=i%4;
        }
        if(s[i]=='G'){
            pos_g=i%4;
        }
        if(s[i]=='B'){
            pos_b=i%4;
        }
        if(s[i]=='Y'){
            pos_y=i%4;
        }
    }
    lli dead_r=0, dead_g=0, dead_b=0, dead_y=0;
    loop(i,0,len){
        if(s[i]=='!'){
            if(i%4==pos_r){
                dead_r++;
            }
            if(i%4==pos_g){
                dead_g++;
            }
            if(i%4==pos_b){
                dead_b++;
            }
            if(i%4==pos_y){
                dead_y++;
            }
        }
    }
    cout<<dead_r<<" "<<dead_b<<" "<<dead_y<<" "<<dead_g;
    return 0;
}