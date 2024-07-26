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
        lli n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string rs2=s2;
        reverse(rs2.begin(),rs2.end());
        lli diff=0,diffr=0;
        loop(i,0,n){
            if(s1[i]!=s2[i]){
                diff++;
            }
        }
        loop(i,0,n){
            if(s1[i]!=rs2[i]){
                diffr++;
            }
        }
        if(s1==s2){
            cout<<"0"<<endl;
            continue;
        }
        if(s1==rs2){
            cout<<"2"<<endl;
            continue;
        }
        lli ans,ansr;
        if(diffr%2!=0){
            ansr=2*diffr;
        }
        else{
            ansr=2*diffr-1;
        }
        if(diff%2!=0){
            ans=2*diff-1;
        }
        else{
            ans=2*diff;
        }
        cout<<min(ans,ansr)<<endl;
    }
    return 0;
}