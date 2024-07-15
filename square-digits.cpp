using namespace std;

std::string squareDigits(string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;