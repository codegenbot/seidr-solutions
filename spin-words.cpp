#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            int j = i;
            while (++j && str[j] != ' ') {}
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        cin >> str;
        if (str == "exit")
            break;
        cout << "Spin words: " << spinWords(str) << endl;
    }
    return 0;
}