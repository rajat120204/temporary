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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i*i <= n ; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}

int main()
{
 time
    test{
        lli l, r;
        cin>>l>>r;
        if(l==r && (l==1 || l==2 || l==3)){
            cout<<"-1"<<endl;
            continue;
        }
        if(l==r){
            if(isPrime(l)){
                cout<<"-1"<<endl;
            }
            else{
                if(r%2==0){
                    cout<<r/2<<" "<<r/2<<endl;
                }
                else{
                    lli pf=smallestDivisor(r);
                    r/=pf;
                    cout<<pf<<" "<<pf*(r-1)<<endl;
                }
            }
        }
        else{
            
            if(r%2){
                r--;
            }
            if(r==2){
                cout<<"-1"<<endl;
            }
            else{
                cout<<"2"<<" "<<r-2<<endl;
            }
        }
    }
    return 0;
}