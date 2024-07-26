#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    set<char> s;
    loop(i,0,str.length()){
        if(str[i]>='a' && str[i]<='z'){
            s.insert(str[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}