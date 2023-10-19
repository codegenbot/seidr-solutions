#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
using namespace std;
class Solution {
    public:
	bool parseBoolExpr(string s) {
	    if (s.length() < 4 || (s[1] != '&' && s[1] != '|' && s[1] != '!')) {
		return s[0] == 't' ? true : false;
	    } else {
		if (s[1] == '!') {
		    int seen = 0;
		    string parsedbool;
		    parsedbool += s[1];
		    for (int i = 2; i < s.length() - 1; i++) {
			if (seen == 0 && s[i] == ')') seen++;
			if (s[i] == '(' && seen == 1) seen--;
			if (seen == 1 && s[i] == ',') seen++;
			if ((s[i] == '&' || s[i] == '|') && seen == 2) seen--;
			parsedbool += s[i];
		    }
		    return ! parseBoolExpr(parsedbool);
		} else {
		    bool ans = (s[1] == '&') ? false : true;
		    int seen = 0;
		    for (int i = 1; i < s.length() - 1; i++) {
			string parsedbool;
			if (seen == 0 && s[i] == '(') seen++;
			if (seen == 1 && s[i] == ')') seen--;
			if (seen == 0) continue;
			parsedbool += s[i];
			if (seen == 1 && (s[i] == ',' || i == s.length() - 2)) {
			    if (s[1] == '&' && ! parseBoolExpr(parsedbool)) {
				ans = false;
				break;
			    }
			    if (s[1] == '|' && parseBoolExpr(parsedbool)) {
				ans = true;
				break;
			    }
			    parsedbool.clear();
			}
		    }
		    return ans;
		}
	    }
	}
};
int main() {
    Solution s;
    string ss = "!(f)";
    cout << std::boolalpha << s.parseBoolExpr(ss) << endl;
    return 0;
}
/*
    string s = "!(f)";
    bool ans = true;
    set<char> T, F;
    for (int i = 0; i < ss.length(); i++) {
	if (ss[i] == 't') T.insert(ss[i]);
	if (ss[i] == 'f') F.insert(ss[i]);
	else {
	    T.erase(ss[i]);
	    F.erase(ss[i]);
	}
    }
    for (auto t: T) cout << t << ',';
    cout << endl;
    for (auto f: F) cout << f << ',';
    return 0;
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/
int main() {
