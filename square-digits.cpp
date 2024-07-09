```cpp
#include <string>
using namespace std;

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    std::cout << squareDigits("8174") << endl;
    return 0;
}