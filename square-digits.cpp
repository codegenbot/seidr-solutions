```c++
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
    string input;
    cout << "Enter a number: ";
    cin >> input;
    cout << "Squared digits: " << squareDigits(input) << endl;
    return 0;
}