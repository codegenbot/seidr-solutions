```cpp
#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = 0;
            while (i < str.length() && str[i] != ' ') {
                i++;
                j++;
            }
            string word = str.substr(i - j, j);
            if (word.size() >= 5) {
                for (int k = word.size() - 1; k >= 0; k--) {
                    result += word[k];
                }
            } else {
                result += word;
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}