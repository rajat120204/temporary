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
        if(n%2==0){
            cout<<"-1"<<endl;
            continue;
        }

        else{
            lli count=0;
            bool check=true;
            vlli v;
            while(n!=1){
                lli n1=(n+1)/2;
                lli n2=(n-1)/2;
                if(n1%2==1){
                    n=n1;
                    v.push_back(1);
                    count++;
                }
                else{
                    n=n2;
                    v.push_back(2);
                    count++;
                }
                
                if(count>40){
                    check=false;
                    break;
                }
                
            }
            if(!check){
                cout<<"-1"<<endl;
            }
            else{
            cout<<v.size()<<endl;
            
            loopr(i,0,v.size()){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            }
        }

    }
    return 0;
}