#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int length = 0;
    bool wordStarted = false;
    
    for (char c : input) {
        if (c == ' ') {
            if (length >= 5 && wordStarted) {
                for (int i = length - 1; i >= 0; --i)
                    output += input[i];
                output += " ";
            }
            else
                output += c;
            length = 0;
            wordStarted = false;
        } 
        else {
            if (!wordStarted) {
                wordStarted = true;
            }
            output += c;
            length++;
        }
    }
    
    if (length >= 5 && wordStarted) {
        for (int i = length - 1; i >= 0; --i)
            output += input[i];
    } else
        output = input;
        
    return output;
}

int main() {
    string input;
    while (cin >> input) {
        cout << spinWords(input) << endl;
    }
    return 0;
}