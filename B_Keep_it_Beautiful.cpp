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
        lli a[n];
        loop(i,0,n){
            cin>>a[i];
        }
        string s1="";
        s1+='1';
        lli prev=a[0];
        bool check=true;
        loop(i,1,n){
            if(check){
                if(a[i]>=prev){
                    s1+='1';
                    prev=a[i];
                }
                else{
                    if(a[i]<=a[0]){
                        check=false;
                        s1+='1';
                        prev=a[i];
                    }
                    else{
                        s1+='0';
                    }
                }
            }
            else{
                if(a[i]>=prev){
                    if(a[i]<=a[0]){
                        s1+='1';
                        prev=a[i];
                    }
                    else{
                        s1+='0';
                    }
                }
                else{
                    s1+='0';
                }
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}