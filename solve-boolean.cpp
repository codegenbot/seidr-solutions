#include <string>

int evalBool(std::string s) {
    int result = 1; // Initialize the result to true
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                break;
            case 'f':
                return 0;
            case '|': {
                if (s.length() > 1) {
                    int subResult = evalBool(s.substr(1));
                    result = subResult; 
                    break;
                }
                break;
            }
            case '&': {
                if (s.length() > 1) {
                    int subResult = evalBool(s.substr(1));
                    if (subResult == 0)
                        return 0;
                    else
                        result = subResult;
                    break;
                }
                break;
            }
        }
    }
    return result; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    int result = evalBool(input);
    return result;
}