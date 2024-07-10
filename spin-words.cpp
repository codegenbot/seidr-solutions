#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    // Read input from user
    string str;
    cout << "Enter a string of one or more words (separated by spaces):" << endl;
    getline(cin, str);
    
    // Call the function and print the output
    string output = spinWords(str);
    cout << "Output: " << output << endl;
    
    return 0;
}