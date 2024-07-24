#include <string>
#include <cctype>

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
                    int subResult = evalBool(s.substr(1));
                    if (subResult != 0)
                        return 1;
                }
                break;
            }
            case '&': {
                if (s.length() > 1) {
                    int subResult = evalBool(s.substr(1));
                    if (subResult == 0)
                        return 0;
                }
                break;
            }
        }
    }
    return 0; // Shouldn't reach here, but return 0 anyway
}

int main() {
    std::string input = "t|t|f&f|t|t";
    int result = evalBool(input);
    return result;
}