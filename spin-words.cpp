Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            wordLength = i - output.length();
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) 
                    output += input[output.length() + j]; 
            } else
                output += input.substr(output.length(), wordLength);
            output += ' ';
        }
    }
    
    return output.substr(0, output.length() - 1); // Remove trailing space
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << spinWords(input) << endl;
    return 0;
}