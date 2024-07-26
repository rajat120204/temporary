#include<bits/stdc++.h>
#include<time.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
#define time ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.setf(ios::showpoint);
using namespace std;

int main()
{
 time
    lli n;
    cin>>n;
    string s;
    vector<string> v;
    loop(i,0,n){
        cin>>s;
        v.push_back(s);
    }
    lli random=rand()%n + 0;
    cout<<v[random]<<endl;
    string s_rand;
    cin>>s_rand;
    sort(v[random].begin(), v[random].end());
    sort(s_rand.begin(), s_rand.end());
    if(v[random]==s_rand){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}