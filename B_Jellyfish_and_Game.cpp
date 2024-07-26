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
        lli n,m,k;
        cin>>n>>m>>k;
        lli a[n], b[m];
        lli suma=0, sumb=0;
        loop(i,0,n){
            cin>>a[i];
            suma+=a[i];
        }
        loop(i,0,m){
            cin>>b[i];
            sumb+=b[i];
        }
        
        sort(a,a+n);
        sort(b,b+m);
        lli mina=a[0];
        lli maxa=a[n-1];
        lli minb=b[0];
        lli maxb=b[m-1];
        if(mina>=maxb){
            if(k%2==1){
                cout<<suma<<endl;
            }
            else{
                cout<<suma-maxa+minb<<endl;
            }
        }
       else{
        if(k%2==1){
            cout<<suma-mina+maxb<<endl;
        }
        else{
            if(maxa>maxb){
                cout<<suma-mina+maxb-maxa+min(mina,minb)<<endl;
            }
            else{
                cout<<suma-mina+min(mina,minb)<<endl;
            }
        }
       }
        
    }
    return 0;
}