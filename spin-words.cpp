#include <string>
#include <iostream>

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
    while(true) {
        cout << "Enter a sentence (or 'stop' to exit): ";
        getline(cin, str);
        if(str == "stop")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}