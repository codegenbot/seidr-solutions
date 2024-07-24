#include <string>
#include <algorithm>

bool evalBoolOr(std::string left, std::string right) {
    bool subResult1 = evalBool(left);
    bool subResult2 = evalBool(right);
    return subResult1 || subResult2;
}

bool evalBoolAnd(std::string left, std::string right) {
    bool subResult1 = evalBool(left);
    bool subResult2 = evalBool(right);
    return subResult1 && subResult2;
}

bool evalBool(std::string s) {
    while (s.length() > 0) {
        switch (std::tolower(s[0])) {
            case 't':
                return true;
            case 'f':
                return false;
            case '|': 
            case '&':
                size_t pos = s.find_first_of("|&");
                if (pos == std::string::npos)
                    break;
                std::string left = s.substr(0, pos);
                std::string right = s.substr(pos);
                if (s[0] == '|')
                    return evalBoolOr(left, right);
                else
                    return evalBoolAnd(left, right);
        }
        s.erase(0, 1); // Remove the evaluated part
    }
    return false; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    bool result = evalBool(input);
    return 0;
}