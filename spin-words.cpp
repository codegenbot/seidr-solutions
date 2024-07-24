#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
                result += " ";
            } else
                result += word + " ";
            word = "";
        } else
            word += str[i];
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--)
            result += word[i];
    } else
        result += word;

    return result;
}

int main() {
    string input;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}