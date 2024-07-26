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
lli sum_of_digits(lli n){
    lli sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
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
        lli sum;
        lli max=0;
        lli product;
        loop(i,0,n){
            loop(j,i+1,n){
                product=a[i]*a[j];
                sum=sum_of_digits(product);
                if(sum>max){
                    max=sum;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}