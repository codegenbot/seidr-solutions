#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		if(len&1){
			cout<<s[len/2]<<endl;
		}
		else{
			cout<<s[len/2-1]<<s[len/2]<<endl;
		}
	}
	return 0;
}
