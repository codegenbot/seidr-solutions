#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word = "";

    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5)
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
            else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    else
        result += word;

    return result;
}

int main() {
    // Your code goes here. The following example input will be given:
    string sentence = "this is another test";
    cout << spinWords(sentence) << endl;
    return 0;
}