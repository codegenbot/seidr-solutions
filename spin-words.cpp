#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if (str[i] == ' ') {
            result += str[i];
            i++;
        } else if (i + str.length() - i - 1 >= 5) {
            for (int j = i; j >= std::max(0, i-5); j--) {
                result += str[j];
            }
            i += str.find(' ') == string::npos ? str.length() : str.find(' ');
        } else {
            for (; i < std::min((int)str.length(), i+6); i++) {
                result += str[i];
            }
            i++;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}