#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    string word = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    // your code here
    return 0;
}