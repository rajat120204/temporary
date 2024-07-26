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
#define vcp vector<pair<lli,lli>>
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    test{
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<"NO"<<endl;
            continue;
        }
        bool check=true;
        stack<lli> st;
        loop(i,0,s.size()){
            if(s[i]=='+'){
                if(!st.empty() && st.top()==0){
                    st.push(0);
                }
                else{
                    if(st.empty()){
                        st.push(1);
                    }
                    else{
                        st.push(-1);
                    }
                }
            }
            else if(s[i]=='-'){
                lli top=st.top();
                st.pop();
                if(!st.empty() && top==1){
                    st.pop();
                    st.push(1);
                }
            }
            else{
                if(s[i]=='1'){
                    if(!st.empty() && st.top()==0){
                        check=false;
                    }
                    if(!st.empty()){
                        st.pop();
                        st.push(1);
                    }
                }
                else{
                    if(st.size()<2){
                        check=false;
                    }
                    else if(st.top()==1){
                        check=false;
                    }
                    if(!st.empty()){
                        st.pop();
                        st.push(0);
                    }
                }
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}