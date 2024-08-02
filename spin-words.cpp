#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int length = 0;
    
    for (int i = input.size() - 1; i >= 0; i--) {
        if (input[i] == ' ') {
            length = 0;
        } else {
            length++;
            
            if (length > 4) {
                for (int j = i; j >= i - length; j--) {
                    output += input[j];
                }
                
                output += ' ';
            } else {
                output += input[i];
            }
        }
    }

    return output;
}

int main() {
    string input;
    
    while (true) {
        cout << "Enter a string of one or more words, or enter 'quit' to exit: ";
        cin >> input;
        
        if (input == "quit") {
            break;
        }
        
        cout << spinWords(input) << endl;
    }
    
    return 0;
}