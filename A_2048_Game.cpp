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
    test{
        lli n;
        cin>>n;
        stack<lli> st;
        bool check=false;
        loop(i,0,n){
            lli x;
            cin>>x;
            st.push(x);
        }
        while(st.size()>1){
            lli a=st.top();
            st.pop();
            lli b=st.top();
            st.pop();
            if(a==2048){
               check=true;
               break;
            }
            if(a==b){
                st.push(a+b);
            }
            else{
                st.push(b);
            }
        }
        check |= (st.top()==2048);
        cout<<(check?"YES\n":"NO\n");
    }
    return 0;
}