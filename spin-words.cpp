#include <algorithm> // for split and reverse
#include <string>    // for string manipulation

using namespace std;

string spinWords(string input) {
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    return join(words, ' ');
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}