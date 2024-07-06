#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    int i = 0;
    while (i < input.size()) {
        if (input[i] == ' ') {
            ++i;
        } else {
            string word = "";
            while (i < input.size() && input[i] != ' ') {
                word += input[i];
                ++i;
            }
            bool hasVowel = false;
            for (int j = 0; j < word.size(); j++) {
                if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u') {
                    hasVowel = true;
                    break;
                }
            }
            if (hasVowel) {
                output += word;
            } else {
                output += " ";
                output += word;
            }
        }
    }
    
    cout << output << endl;
    
    return 0;
}