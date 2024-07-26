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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char,lli> m;
    lli l1=s1.length(), l2=s2.length();
    loop(i,0,l1){
        m[s1[i]]++;
    }
    bool check=true;
    loop(i,0,l2){
        if(s2[i]==' '){
            continue;
        }
        if(m[s2[i]]>0){
            m[s2[i]]--;
        }
        else{
            check=false;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}