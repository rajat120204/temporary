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
    test{
        lli n;
        cin>>n;
        lli a[n];
        lli even=0, odd=0;
        loop(i,0,n){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd>=3){
            cout<<"YES"<<endl;
            lli count=0;
            loop(i,0,n){
                if(a[i]%2!=0){
                    cout<<i+1<<" ";
                    count++;
                    if(count==3){
                        break;
                    }
                }
            }
            cout<<endl;
        }
        else if(odd<3 && odd>=1 && even>=2){
            cout<<"YES"<<endl;
            lli count1=0, count2=0;
            loop(i,0,n){
                if(a[i]%2==0){
                    cout<<i+1<<" ";
                    count1++;
                    if(count1==2){
                        break;
                    }
                }
            }
            loop(i,0,n){
                if(a[i]%2!=0){
                    cout<<i+1<<" ";
                    count2++;
                    if(count2==1){
                        break;
                    }
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}