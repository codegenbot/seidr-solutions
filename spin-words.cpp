#include <iostream>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    using namespace std;
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5)
                result.append(word.rbegin(), word.rend());
            else
                result.append(word);
            if (i < str.length())
                result.append(" ");
            start = i + 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}