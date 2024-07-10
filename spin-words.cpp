#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int count = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (count >= 5) {
                for (int j = i - 1; j >= count - 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(count, i - count);
            }
            count = 0;
        } else {
            count++;
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string (or 'q' to quit): ";
        cin >> input;
        if (input == "q") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}