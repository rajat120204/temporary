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
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    lli min=a[0], max=a[n-1];
    lli d=max-min;
    if(d==0){
        cout<<"0 "<<((n)*(n-1))/2<<endl;
    }
    else{
        lli count_max=0, count_min=0;
        loop(i,0,n){
            if(a[i]==max){
                count_max++;
            }
            if(a[i]==min){
                count_min++;
            }
        }
        cout<<d<<" "<<count_max*count_min;
    }
    return 0;
}