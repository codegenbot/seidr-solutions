Here's the solution:

#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    size_t start = 0;
    while (start < sentence.length()) {
        size_t end = sentence.find(" ", start);
        if (end == string::npos) {
            end = sentence.length();
        }
        string word = sentence.substr(start, end - start);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        start = end + 1;
    }
    return result.substr(0, result.length() - 1); // remove the extra space at the end
}

int main() {
    string sentence;
    while (true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> sentence;
        if (sentence == "q") {
            break;
        }
        cout << spinWords(sentence) << endl;
    }
    return 0;
}