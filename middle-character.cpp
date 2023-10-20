#include <cstring>
#include <stack>
#include <string>
#include <iostream>
#include <climits>
#include <math.h>
#include <map>
#include <set>
#include <stdio.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	if (s.size()%2 == 0){
		cout << s[s.size()/2-1] << s[s.size()/2];
	}else{
		cout << s[s.size()/2];
	}
	return 0;
}
