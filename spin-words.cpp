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
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter the input: ";
    getline(cin, str);
    cout << "Output: " << spinWords(str) << endl;
    return 0;
}