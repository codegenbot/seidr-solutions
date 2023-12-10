#include <vector>
#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    vector<string> words = split(sentence, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    return join(words, ' ');
}