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
    string s;
    cin>>s;
    lli len=s.length();
    bool check=false;
    if(len>=3){
        for(lli i=0; i<len;){
            if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
                check=true;
                i+=3;
            }
            else if(s[i]=='1' && s[i+1]=='4'){
                check=true;
                i+=2;
            }
            else if(s[i]=='1'){
                check=true;
                i++;
            }
            else{
                check=false;
                break;
            }
        }
    }
    else{
        if(s=="1"){
            check=true;
        }
        else if(s=="14"){
            check=true;
        }
        else if(s=="11"){
            check=true;
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