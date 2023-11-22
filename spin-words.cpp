#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string spinWords(string sentence) {
    stringstream ss(sentence);
    string word;
    string result;
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // Remove the last space character
    return result;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << spinWords(sentence) << endl;
    return 0;
}