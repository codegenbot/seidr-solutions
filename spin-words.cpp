#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int i = 0;
    
    while(i<input.length()) {
        if(input[i] != ' ') {
            output += input[i];
        } else {
            int j = output.length() - 1;
            while(j >= 0 && (output[j] == ' ' || i > 0)) {
                output.replace(j, 1, 1, input[i]);
                i++;
                j--;
            }
        }
    }
    
    return output;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << "Spun words: " << spinWords(input) << endl;
    return 0;
}