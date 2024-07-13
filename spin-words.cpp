#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    vector<string> words;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            result += string(reverse(words[i])).append(" ");
        } else {
            result += words[i] + " ";
        }
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Result: " << spinWords(str) << endl;
    return 0;
}