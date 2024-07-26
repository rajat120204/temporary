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
    lli a[n], b[n-1], c[n-2];
    loop(i,0,n){
        cin>>a[i];
    }
    loop(i,0,n-1){
        cin>>b[i];
    }
    loop(i,0,n-2){
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+(n-1));
    sort(c,c+(n-2));
    lli ans1=-1, ans2=-1;
    loop(i,0,n-1){
        if(a[i]!=b[i]){
            ans1=a[i];
            break;
        }
    }
    loop(i,0,n-2){
        if(b[i]!=c[i]){
            ans2=b[i];
            break;
        }
    }
    if(ans1==-1){
        ans1=a[n-1];
    }
    if(ans2==-1){
        ans2=b[n-2];
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}