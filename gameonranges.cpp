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
        int n,x,y;
        cin>>n;

        vector<pair<int,pair<int,int> > > v;

        for(int i=0;i<n;i++){
            cin>>x>>y;
            v.push_back(make_pair(x+y,make_pair(x,y)));
        }
        sort(v.begin(),v.end());
        int k=1;

        for(int i=0;i<n;i++){
            if(v[i].first==v[i+1].first){
                if(v[i+1].second.first==i+1 || v[i+1].second.second==i+1){
                    swap(v[i],v[i+1]);
                }
            }
        }

        // if(v[n-2].first==v[n-1].first){
        //     if(v[n-1].second.first>v[n-2].second.first){
        //         swap(v[n-1],v[n-2]);
        //     }
        // }

        for(auto val : v){
            cout<<val.second.first<<" "<<val.second.second<<" "<<k++<<endl;
        }
        cout<<endl;

    }
    return 0;
}