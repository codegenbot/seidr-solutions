
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string input, output;
    getline(cin, input);
    // Split the input string into words.
    vector<string> words = splitStringBySpace(input);

    // Reverse each word that is 5 or more letters long.
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            string reversedWord = reverseString(words[i]);
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    output = joinStringBySpace(words);

    cout << output << endl;
}

vector<string> splitStringBySpace(string str) {
    vector<string> words;
    size_t pos = 0;
    while (pos < str.length()) {
        int spaceIndex = str.find(' ', pos);
        if (spaceIndex == string::npos) break;
        words.push_back(str.substr(pos, spaceIndex - pos));
        pos = spaceIndex + 1;
    }
    return words;
}

string reverseString(string str) {
    return str.length() > 0 ? reverseString(str.substr(1)) + str[0] : "";
}

string joinStringBySpace(vector<string> words) {
    string output = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) output += " ";
        output += words[i];
    }
    return output;
}