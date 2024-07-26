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
        lli n, a, q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(n==a){
            cout<<"YES"<<endl;
        }
        else{
            lli count=0;
            lli x=a;
            bool check=false;
            loop(i,0,q){
                if(s[i]=='+'){
                    a++;
                    count++;
                }
                else{
                    a--;
                }
                if(a==n){
                    check=true;
                    break;
                }
            }
            if(check){
               cout<<"YES"<<endl;
            }
            else if(count+x>=n){
               cout<<"MAYBE"<<endl;
            }
            else{
               cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}