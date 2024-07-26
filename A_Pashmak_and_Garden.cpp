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
    lli x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    lli d1=abs(x1-x2);
    lli d2=abs(y1-y2);
    lli d=d1+d2;
    if(x1==x2 || y1==y2){
       if(y1==y2){
        cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;
       }
       else{
        cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
       }
    }
    else if(d1==d2){
        if(x2>x1){
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
        else{
            cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}