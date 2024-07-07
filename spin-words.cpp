#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string spinWords(string input) {
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i], 0, words[i].length());
        }
    }
    return words.join(" ");
}