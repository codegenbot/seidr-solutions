#include <cstddef>
#include <string>

bool solveBoolean(const std::string& s) {
    bool result = true;
    size_t i = 0;

    while (i < s.size()) {
        if (s[i] == 'T') {
            result = true;
        } else if (s[i] == 'F') {
            result = false;
        } else if (s[i] == '|') {
            bool temp = result;
            i++;
            while (i < s.size() && s[i] != '|') {
                if (s[i] == '&') {
                    i++;
                    while (i < s.size() && s[i] != '|') {
                        if (s[i] == 'T') {
                            result = temp;
                        } else {
                            result = !temp;
                        }
                        i++;
                    }
                } else {
                    if (s[i] == 'T') {
                        result = temp;
                    } else {
                        result = !temp;
                    }
                    i++;
                }
            }
        } else if (s[i] == '&') {
            bool temp = result;
            i++;
            while (i < s.size() && s[i] != '&') {
                if (s[i] == 'T') {
                    result = temp;
                } else {
                    result = !temp;
                }
                i++;
            }
        }
        i++;
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter Boolean expression (T/F/|/&): ";
    std::getline(std::cin, s);
    bool result = solveBoolean(s);
    if(result)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
    return 0;
}