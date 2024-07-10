#include <iostream>
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '|') {
            i++;
            if (s[i] != '&')
                return true;
            for (; i < s.size() && s[i] == '&'; i++);
            if (i >= s.size() || s[i] != 'T' || !result)
                result = false;
            else
                result = true;
        } else if (s[i] == '&') {
            bool andResult = true;
            for (; i < s.size() && s[i] == '&'; i++);
            while (i < s.size()) {
                if (s[i] == 'T')
                    continue;
                if (s[i] == 'F' || s[i] != '&')
                    andResult = false;
                i++;
                if (i >= s.size() || s[i] != '&')
                    break;
            }
            result = andResult && result;
        } else if (s[i] == 'T')
            continue;
        else
            return false;

        i++;
    }
    return result;
}

int main() {
    std::cout << solveBoolean("T|F&F") << std::endl;
    std::cout << solveBoolean("f&f|f&f|f|f&f&f&f|t|f|t|f&f&f&f&f|f&t");
    return 0;
}