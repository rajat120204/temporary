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
        string s="abcdefghijklmnopqrstuvwxyz";
        if(n>26){
            if(n==27){
                cout<<"aay"<<endl;
            }
            else{
                lli x=n/26;
                lli y=n%26;
                if(y==0){
                    if(n==52){
                        cout<<"ayz"<<endl;
                        continue;
                    }
                    else{
                        cout<<"zzz"<<endl;
                        continue;
                    }
                }
                else{
                    if(x==1){
                        cout<<'a'<<s[y-2]<<'z'<<endl;
                        continue;
                    }
                    else if(x==2){
                        cout<<s[y-1]<<"zz"<<endl;
                        continue;
                    }
                }
            }
        }
        else{
            if(n==26){
                cout<<"aax"<<endl;
                continue;
            }
            else{
                cout<<"aa";
                lli z=n-2;
                cout<<s[z-1]<<endl;
                continue;
            }
        }
    }
    return 0;
}