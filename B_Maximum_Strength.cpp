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
        string s1, s2;
        cin>>s1>>s2;
        lli maxlen=max(s1.length(),s2.length());
        if(s1.length()<s2.length()){
            loop(i,0,s2.length()-s1.length()+1){
                s1='0'+s1;
            }
        }
        if(s2.length()<s1.length()){
            loop(i,0,s1.length()-s2.length()+1){
                s2='0'+s2;
            }
        }
        //cout<<s1<<" "<<s2<<endl;
        //cout<<s1.length()<<" "<<s2.length()<<endl;
        
        lli index=-1;
        loop(i,0,maxlen){
            if(s1[i]!=s2[i]){
                index=i;
                break;
            }
        }
        if(index==-1){
            cout<<"0"<<endl;
            continue;
        }
        lli ans=0;
        loop(i,index,maxlen){
            if(i==index){
                ans+=abs(s1[i]-s2[i]);
            }
            else{
                ans+=9;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}