Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int length = 0;
    
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == ' ') {
            length = 0;
            output += " ";
        } else {
            length++;
            if(length >= 5)
                output += (input.substr(i-length+1, length)).reverse().append(input.substr(0, i-length)) + " ";
            else
                output += input[i] ;
        }
    }
    
    return output;
}

int main() {
    string input;
    cout << "Enter your input: ";
    getline(cin, input);
    cout << "Output: " << spinWords(input) << endl;
    return 0;
}