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
#define sc set<char>
#define ss set<string>
using namespace std;

int main()
{
 time
    test{
        string s;
        cin>>s;
        sc st;
        loop(i,0,s.length()){
            st.insert(s[i]);
        }
        bool check=false;
        if(st.size()==1){
            cout<<"-1"<<endl;
            check=true;
        }
        string s1=s;
        reverse(s1.begin(), s1.end());
        if(s==s1 && !check){
            cout<<s.length()-1<<endl;
        }
        if(s!=s1 && !check){
            cout<<s.length()<<endl;
        }
    }
    return 0;
}