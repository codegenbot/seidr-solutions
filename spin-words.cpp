#include <string>
using namespace std;

string spinWords(string sentence) {
    string output = "";
    size_t start = 0;
    for (size_t end = 0; end <= sentence.length(); end++) {
        if (end == sentence.length() || (sentence[end] != ' ' && end + 1 > sentence.length())) {
            string word = sentence.substr(start, end - start);
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; i--) {
                    output += word[i];
                }
            } else {
                output += word;
            }
            start = end + 1;
        }
    }
    return output;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;

    return 0;
}