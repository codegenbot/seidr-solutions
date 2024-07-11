```cpp
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                string revWord;
                for (int j = word.length() - 1; j >= 0; j--)
                    revWord += word[j];
                result += revWord + " ";
                word = "";
            } else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        string revWord;
        for (int j = word.length() - 1; j >= 0; j--)
            revWord += word[j];
        result += revWord + " ";
    } else
        result += word + " ";

    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}