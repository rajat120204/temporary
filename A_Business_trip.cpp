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
    lli k;
    cin>>k;
    lli a[12];
    lli sum=0;
    loop(i,0,12){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+12,greater<lli>());
    lli count=0;
    if(sum<k){
        count=-1;
    }
    else{
        lli sum1=0;
        while(sum1<k){
        loop(i,0,12){
            sum1+=a[i];
            count++;
            if(sum1>=k){
                break;
            }
        }
      }
    }
    
    cout<<count<<endl;
    return 0;
}