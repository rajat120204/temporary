#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
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
    lli n;
    cin>>n;
    lli a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    loop(i,0,n){
        bool check=0;
        lli count=0;
        if(a[i]==1 || a[i]==2 || a[i]==3){
            check=1;
        }
        else{
            if(a[i]>3){
                for(lli j=2; j*j<n; j++){
                    if(a[i]%j==0){
                        check=1;
                    }
                }
            }
            else{
                loop(j,1,n){
                    if(n%j==0){
                        count++;
                        if(count>3){
                            check=1;
                            break;
                        }
                    }
                }
            }
        }
        if(check){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}