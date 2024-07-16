#include <string>
using namespace std;

std::string squareDigits(std::string n) {
    std::string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    return res;
}

int main() {
    string input = "493193"; 
    cout << squareDigits(input) << endl; 
    return 0;
}