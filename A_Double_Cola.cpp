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
    lli n;
    cin>>n;
    lli a=1, b=1, c=1, d=1, e=1;
    lli ans=0;
    while(1){
        n-=a;
        if(n<=0){
            ans=1;
            break;
        }
        a*=2;
        n-=b;
        if(n<=0){
            ans=2;
            break;
        }
        b*=2;
        n-=c;
        if(n<=0){
            ans=3;
            break;
        }
        c*=2;
        n-=d;
        if(n<=0){
            ans=4;
            break;
        }
        d*=2;
        n-=e;
        if(n<=0){
            ans=5;
            break;
        }
        e*=2;
    }
    if(ans==1){
        cout<<"Sheldon"<<endl;
    }
    else if(ans==2){
        cout<<"Leonard"<<endl;
    }
    else if(ans==3){
        cout<<"Penny"<<endl;
    }
    else if(ans==4){
        cout<<"Rajesh"<<endl;
    }
    else{
        cout<<"Howard"<<endl;
    }
    return 0;
}