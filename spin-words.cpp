#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
int main() {
	string line;
	while (getline(cin, line) && line != "end") {
		map<int, bool> pos;
        string ans="";
		stringstream ss;
		ss<<line;
		string s1="", s2="";
		while(ss >> s1){
			int c=0;
			for (int i=0; i<s1.size(); i++){
				if (isalpha(s1[i]))
					c++;
			}
			if (c>=5)
				pos[s1.size()]=true;
		}
		bool appear=false;
		ss.clear();
		ss<<line<<" ";
		while(ss >> s2){
			if (pos[s2.size()]){
				reverse(s2.begin(), s2.end());
				appear=true;
			}
			if (appear){
				ans+=s2+" ";
				appear=false;
			}else
				ans+=s2+" ";
		}
		ans.pop_back();
		cout<<ans<<endl;
	}
	return 0;
}
