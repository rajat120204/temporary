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
        lli n;
        cin>>n;
        string s;
        cin>>s;
        // vs v;
        // msl m;
        bool check=false;
        loop(i,0,n-1){
            string temp="";
            temp+=s[i];
            temp+=s[i+1];
            loop(j,i+2,n-1){
                string temp1="";
                temp1+=s[j];
                temp1+=s[j+1];
                if(temp==temp1){
                    check=true;
                    break;
                }
            }
            if(check){
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // loop(i,0,v.size()){
        //     m[v[i]]++;
        // }
        
        // trav(it,m){
        //     if(it.second>=2){
        //         check=true;
        //         break;
        //     }
        // }
        // if(check){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }
    return 0;
}