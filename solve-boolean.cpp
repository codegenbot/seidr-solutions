```c++
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            while(i+1<s.length() && s[i+1] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    std::string s1 = "T";
    bool result1 = solveBoolean(s1);
    std::cout << "Test case 1: " << (result1 ? "True" : "False") << std::endl;

    std::string s2 = "F|T";
    bool result2 = solveBoolean(s2);
    std::cout << "Test case 2: " << (result2 ? "True" : "False") << std::endl;

    std::string s3 = "T&T";
    bool result3 = solveBoolean(s3);
    std::cout << "Test case 3: " << (result3 ? "True" : "False") << std::endl;

    std::string s4 = "F&F";
    bool result4 = solveBoolean(s4);
    std::cout << "Test case 4: " << (result4 ? "True" : "False") << std::endl;

    std::string s5 = "T|F&F";
    bool result5 = solveBoolean(s5);
    std::cout << "Test case 5: " << (result5 ? "True" : "False") << std::endl;

    return 0;
}