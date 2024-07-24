```cpp
#include <string>
#include <cctype>

bool evalBool(std::string s) {
    bool result = false;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 't':
                return true;
            case 'f':
                return false;
            case '|': {
                if (s.length() > 1) {
                    if (evalBool(s.substr(1)))
                        return true;
                }
                break;
            }
            case '&': {
                if (s.length() > 1) {
                    if (evalBool(s.substr(1)) == false)
                        return false;
                }
                break;
            }
        }
    }
    return result; 
}

int main() {
    std::string input = "t|t|f&f|t|t";
    bool result = evalBool(input);
    return static_cast<int>(result); 
}