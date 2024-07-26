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
        char c[10][10];
        loop(i,0,10){
            loop(j,0,10){
                cin>>c[i][j];
            }
        }
        lli score=0;
        loop(i,0,10){
            loop(j,0,10){
                if(c[i][j]=='X'){
                    if(i==0){
                        score++;
                    }
                    if(i==1){
                        if(j>=1 && j<=8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==2){
                        if(j>=2 && j<=7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==3){
                        if(j>=3 && j<=6){
                            score+=4;
                        }
                        else if(j==2 || j==7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==4){
                        if(j>=4 && j<=5){
                            score+=5;
                        }
                        else if(j==3 || j==6){
                            score+=4;
                        }
                        else if(j==2 || j==7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==5){
                        if(j>=4 && j<=5){
                            score+=5;
                        }
                        else if(j==3 || j==6){
                            score+=4;
                        }
                        else if(j==2 || j==7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==6){
                        if(j>=3 && j<=6){
                            score+=4;
                        }
                        else if(j==2 || j==7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==7){
                        if(j>=2 && j<=7){
                            score+=3;
                        }
                        else if(j==1 || j==8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==8){
                        if(j>=1 && j<=8){
                            score+=2;
                        }
                        else{
                            score++;
                        }
                    }
                    if(i==9){
                        score++;
                    }
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}