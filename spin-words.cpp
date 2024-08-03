```cpp
#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string output = "";
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            output += " ";
        } else if ((i == str.length() - 1) || (str[i + 1] == ' ')) {
            int j = i;
            while ((j > 0) && (str[j - 1] != ' ')) j--;
            string word = str.substr(j, i - j);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word;
        } else {}
    }
    return output;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}