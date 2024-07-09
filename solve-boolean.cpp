#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'F') {
            res = false;
        }
        else if (c == '&') {
            while(res && s.find('&') != string::npos) {
                size_t pos = s.find('&');
                int left = 1, right = 0;
                for(int i = 0; i < pos; i++) {
                    if(s[i] == '(')left++;
                    else if(s[i] == ')')right++;
                }
                for(int i = pos + 1; ; i++) {
                    if(s[i] == '(')left--;
                    else if(s[i] == ')')right--;
                    if(left == 0 && right == 0)break;
                }
                s.erase(0, i);
            }
        }
        else if (c == '|') {
            while(res || s.find('|') != string::npos) {
                size_t pos = s.find('|');
                int left = 1, right = 0;
                for(int i = 0; i < pos; i++) {
                    if(s[i] == '(')left++;
                    else if(s[i] == ')')right++;
                }
                for(int i = pos + 1; ; i++) {
                    if(s[i] == '(')left--;
                    else if(s[i] == ')')right--;
                    if(left == 0 && right == 0)break;
                }
                s.erase(0, i);
            }
        }
    }
    return res;
}