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
        string s1,s2,s3;
        cin>>s1>>s2;
        s3=s1+s2;
        lli len=s3.length();
        set<char> s;
        loop(i,0,len){
            s.insert(s3[i]);
        }
        if(s.size()==4){
            cout<<"3"<<endl;
        }
        else if(s.size()==3){
            cout<<"2"<<endl;
        }
        else if(s.size()==2){
            cout<<"1"<<endl;
        }
        else if(s.size()==1){
            cout<<"0"<<endl;
        }
    }
    return 0;
}