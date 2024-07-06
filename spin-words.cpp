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
            // Reverse the word if it's five or more letters long
            if (word.size() >= 5) {
                output += word.substr(0, 4);
                output += word.substr(4);
            } else {
                output += " ";
                output += word;
            }
        }
    }
    
    cout << output << endl;
    
    return 0;
}