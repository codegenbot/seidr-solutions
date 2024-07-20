#include <string>
 
std::string solveBoolean(std::string s) {
    int i = 0;
    while(i<s.size()) {
        if(s[i] == '&') {
            if(s[i+1] == '&') i++;
            else return "False";
        } else if(s[i] == '|') {
            if(s[i+1] == '|') i++;
            else return "False";
        } else if((s[i] == 'T' || s[i] == 'F') && (i == s.size() - 1)) {
            return s;
        } else if ((s[i] == 'T' || s[i] == 'F')) {
            int j = i + 1;
            while(j<s.size() && (s[j] == 'T' || s[j] == 'F')) j++;
            i = j - 1;
        }
    }
    return "True";
}