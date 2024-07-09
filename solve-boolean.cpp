#include <string>

bool solveBoolean(std::string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'F') return false;
        if (s[i] == 'T') continue;
        char op = s[i];
        int j = i + 1;
        while(j<n && (s[j] == 'T' || s[j] == 'F')) j++;
        int k = j;
        while(k > i && s[k] == op) k--;
        std::string sub = s.substr(i, k - i + 1);
        if ((op == '&') && (sub.find('T') == std::string::npos)) return false;
        if ((op == '|') && (sub.find('F') == std::string::npos)) return true;
        i = k;
    }
    return s.length() > 0 ? false : true;
}