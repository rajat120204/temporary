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
bool hasCommonElements(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::unordered_set<int> elements;
    
    // Insert elements from vec1 into the set
    for (int num : vec1) {
        elements.insert(num);
    }
    
    // Check if any element from vec2 is present in the set
    for (int num : vec2) {
        if (elements.count(num) > 0) {
            return true;
        }
    }
    
    return false;
}
std::vector<int> findCommonElements(const std::vector<pair<lli,lli>>& vec1, const std::vector<pair<lli,lli>>& vec2) {
    std::unordered_set<pair<lli,lli>> elements(vec1.begin(), vec1.end());
    std::vector<pair<lli,lli>> commonElements;
    
    for (pair<lli,lli> num : vec2) {
        if (elements.count(num) > 0) {
            commonElements.push_back(num);
        }
    }
    
    return commonElements;
}

int main()
{
 time
    lli n;
    cin>>n;
    lli a[n], b[n];
    loop(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    vector<pair<lli,lli>> va, vb;
    loop(i,0,n-1){
        va.pb({a[i],a[i+1]});
        vb.pb({b[i],b[i+1]});
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    vector<pair<lli,lli>> common=findCommonElements(va,vb);
    cout<<common[common.size()-1].second<<endl;
    return 0;
}