#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    test{
        string s;
        cin>>s;
        lli k=0;
        loop(i,0,s.length()){
            if(s[i]!='0'){
                k++;
            }
        }
        cout<<k<<endl;
        lli n=stoi(s);
        vector<lli> v;
        lli j=1;
        
        while(n>0){
            if(n%10!=0){
              v.push_back((n%10)*j);
              cout<<((n%10)*pow(10,j))<<" ";
            }
            n=n/10;
            //j*=10;
            j++;
        }
        
        loop(i,0,v.size()){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}