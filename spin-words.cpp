#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = i - result.length();
            if (wordLength >= 5)
                reverse(result.rbegin(), result.rend());
            result += " ";
        } else
            result += tolower(str[i]);
    }
    return result.substr(1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence: ";
        cin >> str;
        if (str == "exit")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}