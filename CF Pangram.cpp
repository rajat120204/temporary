#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    loop(i,0,s.length()){
        s[i]=tolower(s[i]);
    }
    set<char> s1;
    loop(i,0,s.length()){
        s1.insert(s[i]);
    }
    if(s1.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}