#include <iostream>
#include <string>

using namespace std;

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 1, 2);
    } else {
        return s.substr(length / 2, 1);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "The middle character is: " << middleCharacter(input) << endl;

    return 0;
}