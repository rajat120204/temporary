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
    cin>>s1>>s2;
    map<char,lli> m1, m2;
    bool check=true;
    lli ls1=s1.length(), ls2=s2.length();
    loop(i,0,ls1){
        m1[s1[i]]++;
    }
    loop(i,0,ls2){
        m2[s2[i]]++;
    }
    loop(i,0,ls1){
        if(s1[i]=='@'){
            continue;
        }
        if(m2[s1[i]]>0){
            m2[s1[i]]--;
        }
        else if((s1[i]=='a' || s1[i]=='t' || s1[i]=='c' || s1[i]=='o' || s1[i]=='d' || s1[i]=='e' || s1[i]=='r') && m2['@']>0){
            m2['@']--;
        } 
        else{
            check=false;
        }
        
    }

    loop(i,0,ls2){
        if(s2[i]=='@'){
            continue;
        }
        if(m1[s2[i]]>0){
            m1[s2[i]]--;
        }
        else if((s2[i]=='a' || s2[i]=='t' || s2[i]=='c' || s2[i]=='o' || s2[i]=='d' || s2[i]=='e' || s2[i]=='r') && m1['@']>0){
            m1['@']--;
        } 
        else{
            check=false;
        }
        
    }
    
    if(check){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}