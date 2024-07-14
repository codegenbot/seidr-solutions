#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || i == str.length()) {
            wordLength = i - result.length();
            if (wordLength >= 5)
                reverse(result.substr(0, wordLength).begin(), result.substr(0, wordLength).end());
            result += " ";
        } else
            result += str[i];
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence: ";
        cin >> str;
        if(str == "exit")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}