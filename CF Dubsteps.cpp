#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    string s;
	bool check=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!check){
				cout<<" ";
			}
	        continue;
	    }else {
	        check=0;
	        cout<<s[i];
	    }
	}
    return 0;
}