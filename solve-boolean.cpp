#include <string>

int evalBool(std::string s) {
    int result = 0;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                return 1;
            case 'f':
                return 0;
            case '|': {
                if (s.length() > 1) {
                    int subResult1 = evalBool(s.substr(1, 1));
                    int subResult2 = evalBool(s.substr(2));
                    if (subResult1 == 1 || subResult2 == 1)
                        return 1;
                    else
                        return 0;
                }
                break;
            }
            case '&': {
                if (s.length() > 1) {
                    int subResult1 = evalBool(s.substr(1, 1));
                    int subResult2 = evalBool(s.substr(2));
                    if (subResult1 == 1 && subResult2 == 1)
                        return 1;
                    else
                        return 0;
                }
                break;
            }
        }
    }
    return 0; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    int result = evalBool(input);
    return result;
}