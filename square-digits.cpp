#include <string>
using namespace std;

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int num = c - '0';
        output += to_string(num * num);
    }
    return output;
}