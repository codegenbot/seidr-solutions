#include <iostream>
#include <string>

bool solveBoolean(string s) {
    bool res = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            res = true;
        } else if (s[i] == 'F') {
            res = false;
        } else if (s[i] == '|') {
            bool temp = res;
            res = !res;
            res = res && temp;
        } else if (s[i] == '&') {
            bool temp = res;
            res = !res;
            while (res && i < s.length() - 1) {
                if (s[i + 1] == 'T')
                    return true;
                else if (s[i + 1] == 'F')
                    break;
                else if (s[i + 1] == '&') {
                    res = false;
                    while (i < s.length() - 2 && s[i + 1] == '&') {
                        i++;
                    }
                } else if (s[i + 1] == '|') {
                    return true;
                }
            }
            res = temp;
        }
    }
    return res;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}