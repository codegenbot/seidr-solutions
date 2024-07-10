Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength = 0;
    bool inWord = false;
    
    for (char c : input) {
        if (c == ' ') {
            if (inWord && wordLength >= 5) {
                reverse(output.begin() + wordLength - 1, output.end());
            }
            output += c;
            inWord = false;
            wordLength = 0;
        } else {
            output += c;
            inWord = true;
            wordLength++;
        }
    }
    
    if (inWord && wordLength >= 5) {
        reverse(output.begin() + wordLength - 1, output.end());
    }
    
    return output;
}

int main() {
    string input;
    cin >> input;
    cout << spinWords(input) << endl;
    return 0;
}