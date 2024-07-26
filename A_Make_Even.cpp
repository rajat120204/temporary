#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    test{
        string s;
        cin>>s;
        lli count=0;
        loop(i,0,s.length()){
            if(s[i]%2!=0){
              count++;
            }
        }
        if(count==s.length()){
            cout<<"-1"<<endl;
            continue;
        }
        if(s[s.length()-1]%2==0){
            cout<<"0"<<endl;
        }
        else if(s[0]%2==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        

    }
    return 0;
}