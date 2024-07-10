#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str[i];
            i++;
        } else if (str.length() - i >= 5) {
            for (int j = i; j >= std::max(0, i-5); j--) {
                result += str[j];
            }
            i += strlen(result)+1;
        } else {
            for (; i < min((int)str.length(), i+6); i++) {
                result += str[i];
            }
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