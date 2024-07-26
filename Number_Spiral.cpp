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
    test{
        lli x,y;
        cin>>x>>y;

        if(x==y){
            cout<<x*(x-1)+1<<endl;
        }
        else if(x>y){
            if(x%2==0){
                cout<<(x*x)-y+1<<endl;
            }
            else{
                cout<<((x-1)*(x-1))+y<<endl;
            }
        }
        else{
            if(y%2!=0){
                cout<<(y*y)-x+1<<endl;
            }
            else{
                cout<<((y-1)*(y-1))+x<<endl;
            }
        }
    }
    return 0;
}