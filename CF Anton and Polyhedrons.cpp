#include<bits/stdc++.h>
#define lli long long int
#define test lli t; cin>>t; while(t--)
#define loop(i,x,n) for(lli i=x;i<n;i++)
#define loopr(i,x,n) for(lli i=n-1;i>=x;i--)
using namespace std;

int main()
{
    lli n;
    cin>>n;
    vector<string> v;
    loop(i,0,n){
        string s;
        cin>>s;
        v.push_back(s);
    }
    lli count=0;
    loop(i,0,n){
        if(v[i]=="Tetrahedron"){
            count+=4;
        }
        else if(v[i]=="Cube"){
            count+=6;
        }
        else if(v[i]=="Octahedron"){
            count+=8;
        }
        else if(v[i]=="Dodecahedron"){
            count+=12;
        }
        else if(v[i]=="Icosahedron"){
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}