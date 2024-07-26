#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
    int t;
    cin>>t;
    while(t--)
    {
 int i;
	string str;
	cin>>i;
	int rem = 10*((i%10)-1);
	str = to_string(i);
	int m = str.length();
	int n = (m*(m+1))/2;
   int sum = rem+n;
   cout<<sum<<endl;
    }
	return 0;
}