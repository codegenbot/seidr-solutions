Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            wordCount++;
            result += str.substr(i - str.find_last_of(" ") + 1, (i - (str.find_last_of(" "))) - 1);
        }
        else {
            continue;
        }
    }
    
    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ' ') {
            result += str.substr(i + 1) + " ";
        } 
        else {
            if(wordCount > 0 && strlen(str.c_str()) >= 5) {
                for(int j = strlen(str.c_str()) - 1; j >= 0; j--) {
                    result += str[cstrrev(&str[j])];
                }
                wordCount--;
            } 
            else {
                result += str[i];
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << spinWords(input) << endl;
    return 0;
}