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
    test{
        lli n;
        cin>>n;
        lli a[n];
        lli count1=0, countm1=0;
        loop(i,0,n){
            cin>>a[i];
            if(a[i]==1){
                count1++;
            }
            else{
                countm1++;
            }
        }
        if(countm1%2==0 && count1>=countm1){
            cout<<"0"<<endl;
            continue;
        }
        lli ans=0;
        if(countm1%2!=0){
            countm1--;
            count1++;
            ans++;
        }
        if(count1>=countm1){
            cout<<ans<<endl;
            continue;
        }
        while(count1<countm1){
            countm1-=2;
            count1+=2;
            ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}