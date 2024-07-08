#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
using std::vector;
using std::string;
int main() {
    string input, output;
    getline(cin, input);
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            string reversedWord = words[i];
            reverse(reversedWord.begin(), reversedWord.end());
            words[i] = reversedWord;
        }
    }
    output = join(words, ' ');
    cout << output << endl;
    return 0;
}