#include <string>
#include <algorithm>

bool evalBool(std::string s) {
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                return true;
            case 'f':
                return false;
            case '|': 
                if (s.length() > 1) {
                    int pos = s.find('|');
                    std::string left = s.substr(0, pos);
                    std::string right = s.substr(pos + 1);
                    return evalBoolOr(left, right);
                }
                break;
            case '&':
                if (s.length() > 1) {
                    int pos = s.find('&');
                    std::string left = s.substr(0, pos + 1);
                    std::string right = s.substr(pos + 1);
                    return evalBoolAnd(left, right);
                }
                break;
        }
    }
    return false; 
}

bool evalBoolAnd(std::string left, std::string right) {
    bool subResult1 = evalBool(left);
    bool subResult2 = evalBool(right);
    return subResult1 && subResult2;
}

bool evalBoolOr(std::string left, std::string right) {
    bool subResult1 = evalBool(left);
    bool subResult2 = evalBool(right);
    return subResult1 || subResult2;

}

int main() {
    std::string input = "t|t|f&f|t|t";
    bool result = evalBool(input);
    return 0;
}