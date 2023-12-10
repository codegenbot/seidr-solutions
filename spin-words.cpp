#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Split a string into words
vector<string> split(const string& str, char delimiter) {
    vector<string> words;
    size_t start = 0;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == delimiter) {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }
    if (start != str.length()) {
        words.push_back(str.substr(start));
    }
    return words;
}

// Reverse a string
string reverse(const string& str) {
    string reversed = "";
    for (size_t i = 0; i < str.length(); i++) {
        reversed += str[str.length() - i - 1];
    }
    return reversed;
}

// Join a vector of strings into a single string
string join(const vector<string>& words, char delimiter) {
    string joined = "";
    for (size_t i = 0; i < words.size(); i++) {
        if (i != 0) {
            joined += delimiter;
        }
        joined += words[i];
    }
    return joined;
}

int main() {
    string input;
    getline(cin, input);
    
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    
    string output = join(words, ' ');
    cout << output << endl;
    
    return 0;
}