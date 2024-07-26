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
    test{
        string s1,s2;
        cin>>s1>>s2;
        lli l1=s1.length();
        lli l2=s2.length();
        if(s1[l1-1]==s2[l2-1]){
            if(s1[l1-1]=='M'){
                cout<<"="<<endl;
            }
            else if(s1[l1-1]=='S'){
                if(l1>l2){
                    cout<<"<"<<endl;
                }
                else if(l1<l2){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
            else{
                if(l1>l2){
                    cout<<">"<<endl;
                }
                else if(l1<l2){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
        }
        else{
            if(s1[l1-1]>s2[l2-1]){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
    }
    return 0;
}