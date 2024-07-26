#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
#define pb push_back
#define eb emplace_back
using namespace std;

int main()
{
 time
    lli n,m;
    cin>>n>>m;
    map<string,string> m1;
    loop(i,0,m){
        string s1,s2;
        cin>>s1>>s2;
        m1[s1]=s2;
    }
    loop(i,0,n){
        string str;
        cin>>str;
        if(m1[str].length()<str.length()){
            cout<<m1[str]<<" ";
        }
        else{
            cout<<str<<" ";
        }
    }
    return 0;
}