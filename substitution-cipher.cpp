```cpp
#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(const string& input, const string& cipher1, const string& cipher2) {
    string result = "";
    for (auto c : input) {
        if (c == '\0') break;
        size_t pos = cipher2.find(std::tolower(c));
        if (pos != string::npos) {
            result += cipher1[pos];
        } else {
            char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
            size_t pos2 = cipher1.find(originalCase);
            if (pos2 != string::npos) {
                result += originalCase;
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    string input, cipher1, cipher2;
    cin >> input >> cipher1 >> cipher2;
    cout << substitutionCipher(input, cipher1, cipher2) << endl;
    return 0;
}