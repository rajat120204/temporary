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
        lli n;
        cin>>n;
        lli a[n];
        lli sum=0;
        loop(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(sum%n!=0){
            cout<<"NO"<<endl;
            continue;
        }
        lli diff=sum/n;
        loop(i,0,n){
            a[i]-=diff;
        }
        lli sum1=0;
        bool check=false;
        loop(i,0,n){
            sum1+=a[i];
            if(sum1<0){
                cout<<"NO"<<endl;
                check=true;
                break;
            }
        }
        if(!check){
            if(sum1==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}